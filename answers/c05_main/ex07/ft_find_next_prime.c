/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:12:32 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 23:19:50 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= nb / div)
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	//while(!(ft_is_prime(nb)))
	//		nb++;
	//return (nb);
	//
	if (ft_is_prime(nb))
		return(nb);
	else
		while(!ft_is_prime(nb))
			nb++;
	return(nb);
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
	printf("find_next_prime(%d) = %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("find_next_primt(%d) = %d\n", INT_MIN, ft_find_next_prime(INT_MIN));
}
