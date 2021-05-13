/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 04:07:27 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 14:50:08 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
	while (src[i] && i + 1 < size) //i가 null값을 포함해서 size보다 작아야 된다.
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	//i = 0;
    while (src[i])
        ++i;
    return (i);
}

int main(void)
{
	char dest[15];
	//char orig[] = "trucmachin";
	char orig[] = "hellohi";
	printf("%u\n", ft_strlcpy(dest, orig, 2));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, orig, 2));
	printf("%s\n", dest);
	return (0);
}
