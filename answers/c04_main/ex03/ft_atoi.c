/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 06:01:23 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 07:51:09 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
// https://github.com/Eywek/42/blob/master/libft/ft_atoi.c

bool whiteSpace(char str)
{	
	char *wSc;
	
	wSc = "\t\n\v\f\r ";
	while(*wSc)
	{
		if (str == *wSc)
			return (true);
		wSc++;
	}

	return (false);
}

int	ft_atoi(char *str)
{
	int symbol;
	int num;

	symbol = 1;
	num = 0;
	while (whiteSpace(*str))
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

//https://github.com/julekgwa/exams/blob/master/exam_prac_01/ft_atoi.c
int	main(void)
{
	char *s = " ---+--+1234ab567";
	char *s2 = "\t\v\f\r--++-99";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", ft_atoi(s2));
	return (0);
}
