/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:00:37 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 16:03:40 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    //char *string;
	char *string2;
    //string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	string2 = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol.lol. ";
    ft_print_memory(string2, 92);
}
