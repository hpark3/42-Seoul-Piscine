/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:29:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/03/30 17:44:11 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char *ft_strcpy(char *dest, const char *src)
 {
     int i;

     i = 0;
     while (src[i]) //null이 아닐 때까지
     {
         dest[i] = src[i];
         i++;
     }
     dest[i] = 0; // dest문자열의 끝에 null
     return (dest);
 }