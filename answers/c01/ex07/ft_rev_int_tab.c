/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:25:49 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/01 20:15:08 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int idx;
	int last;
	int temp;

	idx = 0;
	last = size - 1;
	while (idx < size / 2)
	{
		temp = tab[idx];
		tab[idx] = tab[last - idx];
		tab[last - idx] = temp;
		idx++;
	}
}
