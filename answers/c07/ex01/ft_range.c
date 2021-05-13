/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:09:16 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/15 00:24:50 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	idx;
	int	*buffer;
	int r;

	idx = 0;
	if (min >= max)
		return (0);
	r = max - min;
	buffer = (int *)malloc(r * sizeof(int));
	if (!buffer)
		return (0);
	while (idx < r)
	{
		buffer[idx] = min + idx;
		idx++;
	}
	return (buffer);
}
