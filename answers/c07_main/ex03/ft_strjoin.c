/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 06:35:11 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/15 06:35:36 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		length_total(char **str, int size, int sep_len)
{
	int	tot_len;
	int	i;

	tot_len = 0;
	i = 0;
	while (i < size)
	{
		tot_len += ft_strlen(str[i]);
		if ((i + 1) < size)
			tot_len += sep_len;
		i++;
	}
	return (tot_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tot_len;
	int		i;
	char	*p_buff;
	char	*buffer;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tot_len = length_total(strs, size, ft_strlen(sep));
	if (!(buffer = (char *)malloc((tot_len + 1) * sizeof(char))))
		return (0);
	p_buff = buffer;
	i = 0;
	while (i < size)
	{
		ft_strcpy(p_buff, strs[i]);
		p_buff += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(p_buff, sep);
			p_buff += ft_strlen(sep);
		}
		i++;
	}
	*p_buff = '\0';
	return (buffer);
}
