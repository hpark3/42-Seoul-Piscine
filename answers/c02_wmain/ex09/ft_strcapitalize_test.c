/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 23:25:31 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/04 03:17:21 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	delim(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if(c >= 'A' && c <= 'Z')
		return (1);
	else if(c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	char *conv;

	i = 0;
	conv = str;
	while (conv[i] != '\0')
	{
		if (&conv[i] == str)
		{
			if (conv[i] >= 'a' && conv[i] <= 'z')
				conv[i] -= 32;
				printf("\n\nconv[i] %c\n\n", conv[i]);
		}
		else if (delim(conv[i - 1]) == 0)
		{
			printf("\n\nconv[i-1] %c\n\n", conv[i-1]);
			if (conv[i] >= 'a' && conv[i] <= 'z')
				conv[i] -= 32;
		}
		else if (conv[i] >= 'A' && conv[i] <= 'Z')
		{
			conv[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[100] = "bien venidos";
	char c[100] = "for test sentence ,t,a,.s\t\\asd";
	char d[100] = "test\tTER ^123\t";

	ft_strcapitalize(a);
	ft_strcapitalize(b);
	ft_strcapitalize(c);
	ft_strcapitalize(d);

	printf("%s\n%s\n%s\n%s\n", a, b, c, d);

	return (0);
}
