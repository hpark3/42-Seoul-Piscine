/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:29:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/03 18:32:47 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i]) //src문자열에 값이 있고, 인덱스가 n보다 작을 때
	{
		dest[i] = src[i];
		i++;
	}
    while (i < n) //src문자열 값이 널일 때
    {
        dest[i] = 0;
        i++;
    }
	return (dest);
}
