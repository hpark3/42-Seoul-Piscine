/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 04:52:27 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 17:03:38 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://dojang.io/mod/page/view.php?id=34
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}

	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}

	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		main(void)
{
	//int nb = INT_MIN;
	int nb2 = 4242;
	//ft_putnbr(nb);
	printf("\n");
	ft_putnbr(nb2);
}
