/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:12:15 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 16:36:38 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://myjamong.tistory.com/139
// https://github.com/malikfassi/42/blob/master/PISCINE_C/j04/ex06/ft_is_prime.c

#include <stdio.h>

int	ft_is_prime(int nb)
{
	// 약수, divisor
	int div;

	if (nb < 2)
		return (0);
	div = 2;
	if (nb == 2 || nb == 3) 
		return (1);
	while (div <= nb / div)
	//while (div * div <= nb)	
	{
		if ((nb % div) == 0)
			return (0);
		div ++;
	}
	return (1);
}

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 20)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first 20 number, %d prime\n", count);
	return (0);
}
