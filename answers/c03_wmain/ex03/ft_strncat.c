/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:20:27 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 19:12:20 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dst;
	unsigned int	i;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while ((i < nb) && (*src != '\0'))
	{
		*dst = *src;
		dst++;
		src++;
		i++;
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

	printf("strcat: %s\n", strncat(together,str_af, 2));
	printf("ft_strcat: %s\n", ft_strncat(together2,str_af, 2));
}
