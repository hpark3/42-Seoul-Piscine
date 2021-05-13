/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:01:49 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 16:15:09 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

int					valid_only(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (!base)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void				ft_putnbr_base(int nbr, char *base)
{
	unsigned int	b_len;
	unsigned int	u_nb;

	b_len = valid_only(base);
	if (!b_len)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		u_nb = nbr * -1;
	}
	else
		u_nb = nbr;
	if (u_nb >= b_len)
		ft_putnbr_base(u_nb / b_len, base);
	ft_putchar(base[u_nb % b_len]);
}
