/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:11:33 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 02:36:35 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
	{
		result *= nb;
	}
	return (result);
}

int	main(void)
{
	int i = 0;
	while (i < 5)
	{
		printf("%d power 3 =  %d\n", i, ft_iterative_power(i,3));
		printf("%d power 0 =  %d\n", i, ft_iterative_power(i,0));
		printf("%d power -2 =  %d\n", i, ft_iterative_power(i,-2));
		i++;
		printf("\n");
	}
	return (0);
}
