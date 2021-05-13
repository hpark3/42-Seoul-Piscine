/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 05:23:40 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/07 05:30:49 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_str_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_str_len(dest);
	src_len = ft_str_len(src);
	i = 0;
	if (size < dest_len)
		return (src_len + size);
	else
	{
		while (src[i] && dest_len + 1 + i < size)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + src_len);
	}
}
