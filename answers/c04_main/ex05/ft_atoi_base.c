/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:40:46 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 15:48:30 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int		ft_base_len(char *base)
{
	int i;
	
	i = 0;
	while(base[i] != '\0')
		i++;
	return (i);
}

bool	whitespace(char str)
{
	char *wsc;

	wsc = "\t\n\v\f\r ";
	while(*wsc)
	{
		if (str == *wsc)
			return (true);
		wsc++;
	}
	return (false);
}

int		valid_only(char *base, int b_len)
{
	int	i;
	int j;

	i = 0;
	while (i < b_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_base_nb(char str_c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != str_c)
		i++;
	return (i);
}	

int	ft_atoi_base(char *str, char *base)
{
	int b_len;
	int s_front;
	int minus;

	s_front = 0;
	minus = 1;
	b_len = ft_base_len(base);
	if (b_len < 2)
		return (0);
	if (!valid_only(base, b_len))
		return (0);
	while (whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (get_base_nb(*str, base) < b_len)
		s_front = (s_front * b_len) + get_base_nb(*str++, base);
	return (s_front * minus);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base(" ---+--+1234ab567", "0123456789"));
	fflush(stdout);
}
