/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:11:23 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 13:50:33 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	//int result;
	//int i;

	//result = 1;
	//i = 1;

	if (nb < 0)
		return (0);

	if (nb == 0)
		return (1);

	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int i = -2;
	int nb = 8;

	while (i < nb)
	{
		printf("factorial %d: %d\n", i, ft_recursive_factorial(i));
		i++;
	}
}
