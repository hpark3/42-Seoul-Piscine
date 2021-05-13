/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:01:49 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 16:14:19 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://github.com/sebastiencs/piscine_42/blob/master/j05/ex17/ft_putnbr_base.c

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//int		baselen(char *base)
//{
//	int	i;
//
//	i = 0;
//	while(base[i])
//		i++;
//	return (i);
//}

int		is_valid(char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	// 기수가 비어있거나 크기가 1인 경우
	//if (base[0] == 0 || base[1] == 0)
	//	return (0);
	
	//	기수가 비어있는 경우
	if (!base)
		return (0);
	while (base[i])
	{
		j = i + 1;
		// 기수에 +나 -가 포함된 경우
		if (base[i] == '+' || base[i] == '-')
			return (0);
		// non-printable 문자도 유효x
		//if (base[i] < 32 || base[i] > 126)
		//	return (0);
		// 동일한문자가 2번 포함된 경우
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	//기수크기가 1인 경우
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int b_len;
	unsigned int u_nb;
	int last_n[100];

	b_len = is_valid(base);
	if (!b_len)
		return;

	if (nbr < 0)
	{
		ft_putchar('-');
		u_nb = nbr * -1;
	}
	else
		u_nb = nbr;
	if (u_nb >= b_len)
		ft_putnbr_base(u_nb / b_len, base);
	ft_putchar(base[u_nb % b_len]);
}

int		main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(5, "01");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(20, "0123456789abcdef");
}
