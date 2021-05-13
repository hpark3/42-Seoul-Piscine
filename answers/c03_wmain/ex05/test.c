/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 03:24:34 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/07 03:26:56 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	while(1)
	{
		char buffer1[100] = "ABC";
		char buffer2[100];
		printf("str : ");
		scanf("%s", buffer2);
		int n;
		printf("n : ");
		scanf("%d", &n);
		printf("%d \n",(signed int)strlcat(buffer1, buffer2, n));
	}
	return (0);
}
