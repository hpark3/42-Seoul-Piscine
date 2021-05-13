/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:12:01 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 13:25:56 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <limits.h>

int		ft_sqrt(int nb)
{
	int	i;

	i = 0;
	//if (nb < 0)
	//	return (0);
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int	main(void)
{
	int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
	printf("\n");
	printf("sqrt(%d) = %f\n", 1000000, sqrt(1000000));
	printf("sqrt(%d) = %f\n", INT_MAX, sqrt(INT_MAX));
	printf("sqrt(%d) = %f\n", INT_MIN, sqrt(INT_MIN));
	printf("sqrt(%d) = %f\n", 2147395600, sqrt(2147395600));	
}
