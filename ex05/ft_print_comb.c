/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 03:18:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/03/31 04:40:46 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d1, char d2)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void	ft_print_comb(void)
{
	char num[3];
	char d1;
	char d2;

	num[0] = '0';
	d1 = ',';
	d2 = ' ';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, &num, 3);
				if (num[0] != '7')
					ft_putchar(d1, d2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
