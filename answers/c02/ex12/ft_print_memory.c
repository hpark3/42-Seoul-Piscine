/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 22:04:37 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 14:00:10 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_addr(void *addr)
{
	unsigned char	c_addr[15];
	unsigned long	l_addr;
	int				i;

	l_addr = (unsigned long)addr;
	i = 0;
	while (l_addr != 0)
	{
		c_addr[i] = l_addr % 16;
		if (c_addr[i] < 10)
			c_addr[i] += 48;
		else
			c_addr[i] += 87;
		l_addr = l_addr / 16;
		i++;
	}
	while (i < 15)
	{
		c_addr[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(c_addr[i]);
}

void	convert_hexa(unsigned char c)
{
	unsigned char	hex1;
	unsigned char	hex2;

	hex1 = c / 16;
	hex2 = c % 16;
	if (hex1 < 10)
		ft_putchar(hex1 + 48);
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + 48);
	else
		ft_putchar(hex2 + 87);
}

void	ft_print_each_line(void *addr, int size)
{
	int				i;
	int				space;
	unsigned char	*ch_part_addr;

	ch_part_addr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		convert_hexa(ch_part_addr[i]);
		i++;
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	space = ((16 - size) * 2) + (19 - size) / 2;
	while (--space > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (32 <= ch_part_addr[i] && ch_part_addr[i] <= 126)
			ft_putchar(ch_part_addr[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_each_line;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			char_each_line = 16;
			size -= 16;
		}
		else
		{
			char_each_line = size;
			size = 0;
		}
		ft_put_addr(addr + offset);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_each_line(addr + offset, char_each_line);
		ft_putchar('\n');
		offset += 16;
	}
	return (addr);
}
