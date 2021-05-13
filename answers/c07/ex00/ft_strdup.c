/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:49:05 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/15 02:09:02 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *src)
{
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	return (len);
}

char		*ft_strdup(char *src)
{
	char	*m_space;
	int		i;

	i = 0;
	m_space = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (m_space == NULL)
		return (0);
	while (src[i])
	{
		m_space[i] = src[i];
		i++;
	}
	m_space[i] = '\0';
	return (m_space);
}
