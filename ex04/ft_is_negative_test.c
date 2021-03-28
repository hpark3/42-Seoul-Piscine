/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 02:42:07 by hyerpark          #+#    #+#             */
/*   Updated: 2021/03/29 03:14:51 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char display)
{
	write(1, &display, 1);
}

void	ft_is_negative(int n)
{
	char display;

	if (n < 0)
	{
		display = 'N';
		ft_putchar(display);
	}
	else
	{
		display = 'P';
		ft_putchar(display);
	}
}

int		main(void)
{
	ft_is_negative(0);
}
