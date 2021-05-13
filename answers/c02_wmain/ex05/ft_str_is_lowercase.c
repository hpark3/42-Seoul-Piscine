/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:10:53 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/03 22:33:53 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || 'Z' < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char sen_alpha[] = "Hello";
	char sen_no_other[] = "HELLO";
	char empty[] = "";
	char space_empty[] = " ";
	printf("%s\n", sen_alpha);
	printf("%d\n", ft_str_is_lowercase(sen_alpha));
	printf("%s\n", sen_no_other);
	printf("%d\n",ft_str_is_lowercase(sen_no_other));
	printf("%s\n", empty);
	printf("%d\n", ft_str_is_lowercase(empty));
	printf("%s\n", space_empty);
	printf("%d\n", ft_str_is_lowercase(space_empty));
}
