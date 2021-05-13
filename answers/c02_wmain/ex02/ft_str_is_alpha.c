/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:29:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/03 19:26:44 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || 'Z' < str[i]) && (str[i] < 'a' || 'z' < str[i]))
		{
			return (0);
		}
		i++;
	}
    return (1);
}

int main(void)
{
	char sen_alpha[6] = "Hello";
	char sen_no_alpha[6] = "Ha-lo";
	char empty[2] = "";
	char space_empty[2] = " ";
	printf("%s\n", sen_alpha);
	printf("%d\n", ft_str_is_alpha(sen_alpha));
	printf("%s\n", sen_no_alpha);
	printf("%d\n",ft_str_is_alpha(sen_no_alpha));
	printf("%s\n", empty);
	printf("%d\n",ft_str_is_alpha(empty));
	printf("%s\n", space_empty);
	printf("%d\n",ft_str_is_alpha(space_empty));
}