/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:25:34 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/15 02:25:23 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int *buffer;
	int i;

	i = -1;
	if (min >= max)
		return (0);
	size = max - min;
	buffer = (int *)malloc(size * sizeof(int));
	if (buffer == (void *)0)
		return (-1);
	while (i < size)
	{
		buffer[++i] = min++;
	}
	*range = buffer;
	return (size);
}
