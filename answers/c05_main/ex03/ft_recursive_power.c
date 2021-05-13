/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:11:43 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 02:56:26 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return (1);
	while(power-- > 0)
		return(nb * ft_recursive_power(nb, power));
	return (0);
}

int	main(void)
{
	printf("2 power 3 = %d\n", ft_recursive_power(2, 3));
	printf("0 power 0 = %d\n", ft_recursive_power(0, 0));
	printf("2 power -3 = %d\n", ft_recursive_power(2, -3));
	printf("3 power 4 = %d\n", ft_recursive_power(3, 4));
	printf("1 power 8 = %d\n", ft_recursive_power(1, 8));
}
