/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:12:15 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 16:43:08 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	if (nb < 2)
		return (0);
	div = 2;
	if (nb == 2 || nb == 3)
		return (1);
	while (div <= nb / div)
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}
