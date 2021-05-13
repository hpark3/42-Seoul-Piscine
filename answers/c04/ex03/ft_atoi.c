/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 06:01:23 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 08:00:05 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	whitespace(char str)
{
	char	*wsc;

	wsc = "\t\n\v\f\r ";
	while (*wsc)
	{
		if (str == *wsc)
			return (true);
		wsc++;
	}
	return (false);
}

int		ft_atoi(char *str)
{
	int		symbol;
	int		num;

	symbol = 1;
	num = 0;
	while (whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			symbol *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * symbol);
}
