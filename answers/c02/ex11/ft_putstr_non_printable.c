/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 05:46:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/05 19:09:13 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conv_c_to_16num(unsigned char *c)
{
	if (*c > 9)
		*c += 87;
	else
		*c += 48;
}

void	ft_printstr(unsigned char c)
{
	unsigned char	af_bsh[2];
	char			bslash;

	bslash = '\\';
	af_bsh[0] = c / 16;
	af_bsh[1] = c % 16;
	conv_c_to_16num(&af_bsh[0]);
	conv_c_to_16num(&af_bsh[1]);
	write(1, &bslash, 1);
	write(1, &af_bsh[0], 1);
	write(1, &af_bsh[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			ft_printstr(*str);
		else
			write(1, str, 1);
		str++;
	}
}
