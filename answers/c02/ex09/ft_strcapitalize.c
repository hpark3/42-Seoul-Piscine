/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 23:25:31 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/04 04:04:51 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		delim(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*conv;

	i = 0;
	conv = str;
	while (conv[i] != '\0')
	{
		if (&conv[i] == str)
		{
			if (conv[i] >= 'a' && conv[i] <= 'z')
				conv[i] -= 32;
		}
		else if (delim(conv[i - 1]) == 0)
		{
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
