/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:57:15 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 02:44:25 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
	
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
//{
//	int				i;
//	unsigned int	d_size;
//
//	i = 0;
//	d_size = 0;
//	while (dest[d_size])
//		d_size++;
//	while (src[i] && (d_size + 1  < size))
//	{
//		dest[d_size] = src[i];
//		d_size++;
//		i++;
//	}
//	dest[d_size] = '\0';
//	return (d_size);
//}

// https://gitlab.pelt10.fr/Pelt10/fillit/blob/solver/libft/ft_strlcat.c

unsigned int	ft_str_len(char *str)
{
	unsigned int len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_len;
	unsigned int src_len;
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

//int				main(void)
//{
//	char	*str_base;
//	char	dest[100];
//	char	dest2[100];
//	char	*src;
//	int		index;

//	str_base = "Hello";
//	src = "World";
//	index = 0;
//	while (index < 6)
//	{
//		dest[index] = str_base[index];
//		dest2[index] = str_base[index];
//		index++;
//	}
	//printf("c  : (%lu) $%s$\n", strlcat(dest, src, 8), dest);
//	printf("lcat : (%d) $%s$\n", (int)strlcat(dest, src, 2), dest);
//	printf("ft : (%d) $%s$\n", (int)ft_strlcat(dest, src, 2), dest);
//}

// https://code4human.tistory.com/112

int 	main(void)
{
	char	r[] = {"muther_fucker_fucking_fuck"};
	char	t[100] = {"Hello "};
	printf("%u, %s\n", (unsigned int)ft_strlcat(t, r, 21), t);
	printf("%u, %s\n", (unsigned int)strlcat(t, r, 21), t);
	return (0);
}
