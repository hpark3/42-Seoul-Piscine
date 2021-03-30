/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:51:53 by hyerpark          #+#    #+#             */
/*   Updated: 2021/03/31 04:38:27 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_char(int n1, int n2)
{
	char num[5];

	num[0] = n1 / 10 + '0';
	num[1] = n1 % 10 + '0';
	num[2] = ' ';
	num[3] = n2 / 10 + '0';
	num[4] = n2 % 10 + '0';
	write(1, &num, 5);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	while (++n1 <= 98)
	{
		n2 = n1;
		while (++n2 <= 99)
		{
			if (n1 < n2)
			{
				put_char(n1, n2);
				if (!(n1 == 98 && n2 == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
