/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:11:52 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 11:54:24 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//fib(1)=0, fib(2)=1, fib(3)=1, fib(4)=2
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	//fib(5) = fib(4) + fib(3)  3 + 2
	//fib(4) = fib(3) + fib(2)  2 + 1
	//fib(3) = fib(2) + fib(1)  1 + 1
	//fib(2) = fib(1) + fib(0)  1 + 0
}

int	main(void)
{
	int	index;

	index = -3;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}
