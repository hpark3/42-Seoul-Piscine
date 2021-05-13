/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:43:04 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 22:41:26 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0')
	{
//		*dst = *(unsigned char *)src;
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dest);
}

int	main(void)
{
	char *str_bf = "Hello";
	char *str_af = "World";
	char together[100];
	char together2[100];
	int	i = 0;

	while (i < 6)
	{
		together[i] = str_bf[i];
		together2[i] = str_bf[i];
		i++;
	}

	printf("strcat: %s\n", strcat(together,str_af));
	printf("ft_strcat: %s\n", ft_strcat(together2,str_af));
}
