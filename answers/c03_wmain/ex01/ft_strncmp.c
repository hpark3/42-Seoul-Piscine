/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 07:42:08 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 01:05:03 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// blockdmask.tistory.com/391

//int	ft_strncmp(char *s1, char *s2, unsigned int n)
//{
//	int	i;

//	i = 0; //문자열의 첫번째 문자부터 차례로 비교. 비교 기준은 각 문자의 ASCII 코드.
//	while (i < n)
//	{
//		if (*s1 != *s2)
//			return (*s1 - *s2); //다르면 바로 차이값 return
//		if (*s1 == '\0'  && *s2 == '\0') //둘 다 null, 즉 마지막까지 비교했으면
//			return (0); //다른 문자가 없었다는 의미. 따라서 0 리턴
//		*s1++;
//		*s2++;
//		i++;
//	}
	//if (n == 0)  //비교할 값이 없을 때
	//	return (0);
//	return (0);
//}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
//	if (n == 0)
//		return (0);
	return (0);
}

int ft_strncmp2(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char* str1 = "BlockDMask";
	//char* str2 = "BlockFMask";
	char* str3 = "";
	printf("%d\n", strncmp(str1, str3, 0)); 
	printf("%d\n", strncmp(str1, str3, 8));
	printf("%d\n", ft_strncmp(str1, str3, 0));
	printf("%d\n", ft_strncmp(str1, str3, 8));
	printf("%d\n", ft_strncmp2(str1, str3, 0));
	printf("%d\n", ft_strncmp2(str1, str3, 8));
}
