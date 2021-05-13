/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:26:58 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/15 05:39:30 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_strlen(char *strs)
{
	int		len;

	len = 0;
	while (strs[len])
		len++;
	return (len);
}

char		*ft_strcat(char *dest, char *src)
{
	char	*buff;
	
	buff = dest;
	while (*buff)
		buff++;
	while (*src)
	{
		*buff = *src;
		buff++;
		src++;
	}
	*buff = 0;
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		tot_len;
	int		i;

	i = 0;
	tot_len = 0;
	while (i < size)
	{
		tot_len += ft_strlen(strs[i]);
		i++;
	}
	tot_len += (ft_strlen(sep) * (size - 1));
	if ((buffer = (char *)malloc((tot_len + 1) * sizeof(char))) == NULL)
		return ((void *)0);
	
	i = 0;
	while (i < size)
	{
		ft_strcat(buffer, strs[i]);
		if ((i + 1) < size)
			ft_strcat(buffer, sep);
		i++;
	}
	return (buffer);
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}
