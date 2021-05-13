/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:10:53 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/03 21:11:47 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || '9' < str[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char num[] = "123456";
    char not_num[] = "non22onon";
    char *empty = "";

    printf("%d\n", ft_str_is_numeric(num));
    printf("%d\n", ft_str_is_numeric(not_num));
    printf("%d\n", ft_str_is_numeric(empty));
}