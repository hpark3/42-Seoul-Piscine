/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:19:39 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 21:09:55 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://m.blog.naver.com/PostView.nhn?blogId=tipsware&logNo=221371715770&proxyReferer=https:%2F%2Fwww.google.com%2F
// https://github.com/appinha/42sp-piscine/blob/master/c_piscine_c_03/ex04/ft_strstr.c

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	//세부 비교를 위해 사용할 포인터 변수 선언
	char *s1;
	char *s2;
	
	s1 = str;
	//찾을 문자열이 ""와 같이 비어있는 경우에는 str의 시작 주소를 반환
	if (*to_find  == 0) 
		return str;
	//str이 가리키는 문자열의 마지막 문자까지 체크
	//제일 처음에는 str이 문자열의 시작위치를 가리키고 있었지만
	//반복이 진행되면 str은 한 문자씩 뒤쪽으로 위치를 이동한다.
	while (*str != 0)
	{
		while (*s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == 0)
			return (str);
		str++; //다음 문자로 이동
	}
	return (0);
}

int	main(void)
{
	// abcdefg 문자열에서 cde 문자열을 찾는다
	char *str = "abcdeftg";
	char *find_str = "cde";
	
	char *result_str = ft_strstr(str, find_str);

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
