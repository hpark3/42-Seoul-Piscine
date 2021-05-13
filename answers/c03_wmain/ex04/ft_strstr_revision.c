/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_revision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:43:03 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/08 01:45:51 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	//찾을 문자열이 ""와 같이 비어있는 경우, str의 시작 주소를 반환
	if (to_find[0] == 0)
		return (str);
	//str이 가리키는 문자열의 마지막 문자까지 체크
	//제일 처음에는 str의 시작위치를 가리킴
	//반복이 진행되면, str은 한 문자씩 뒤로 위치 이동
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0')
		{
			//str과 to_find가 일치하는 문자를 연속해서 반환하다가
			//바로 뒤의 문자가 널(종료문자)이면 str을 반환
			if (to_find[j + 1] == '\0')
				//return (&str[i]);
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	// abcdefg 문자열에서 cde 문자열을 찾는다
	char *str = "abcdeftgZZZZZZddfdfdfd";
	char *find_str = "Zd";

	char *result_str = ft_strstr(str, find_str);
	//char *result_str = strstr(str, find_str);

	if (result_str != 0)
	{
		printf("기준 문자열 : %s\n", str);
		printf("찾을 문자열 : %s\n", find_str);
		printf("찾은 위치 : %s\n", result_str);
	}
	else //문자열 찾기에 실패한 경우
	{
		printf("%s 문자열을 찾을 수 없음\n", find_str);
	}
	return 0;
}
