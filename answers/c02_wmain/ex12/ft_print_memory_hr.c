/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_hr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 04:39:05 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/06 15:38:25 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// 첫번째 컬럼 : 각 행의 시작주소를 
// 1바이트씩 char로 읽어와서 16진수로 변환.
// 메모리 or 포인터 주소값은 부호없이 unsigned 사용이 기본
// [참고] 10진수 -> 16진수 변환
// https://dojang.io/mod/page/view.php?id=743 
void    ft_put_addr(void *addr)
{
    unsigned char   c_addr[15];
    unsigned long   l_addr;
    int             i;

    l_addr = (unsigned long)addr;
    i = 0;
    while (l_addr != 0) //몫이 0이 되면 반복 종료
    {
        c_addr[i] = l_addr % 16; //16으로 나누었을 때의 나머지
        if (c_addr[i] < 10) // 10보다 작으면
            c_addr[i] += 48;
        else //10보다 크거나 같으면
            c_addr[i] += 87;
        l_addr = l_addr / 16; //16으로 나눈 몫을 저장
        i++; // 자릿수 변경
    }
    //자릿수 채우기
    while (i < 15)
    {
        c_addr[i] = '0';
        i++; 
    }
    //배열의 요소를 역순으로 출력
    while (--i >= 0)
        ft_putchar(c_addr[i]);
}

// 문자 16진법으로 변환
void    convert_hexa(unsigned char c)
{
    unsigned char   hex1;
    unsigned char   hex2;

    hex1 = c / 16;
    hex2 = c % 16;

    if (hex1 < 10)
        ft_putchar(hex1 + 48); // 숫자로
    else
        ft_putchar(hex1 + 87); // 소문자로
    if (hex2 < 10)
        ft_putchar(hex2 + 48);
    else
        ft_putchar(hex2 + 87);
}

//2번째 컬럼
//addr + offset, char_each_line 인자를 ↓ 배개변수로 받음
void    ft_print_each_line(void *addr, int size)
{
    int             i; //각 문자의 인덱스
    int             space; // 마지막행 (문자수가 16보다 적을경우) 추가할 스페이스
    unsigned char   *ch_part_addr;

    ch_part_addr = (unsigned char *)addr; //포인터 데이터 자료형 선언
    i = 0;
    while (i < size)
    {
        convert_hexa(ch_part_addr[i]);
        i++;
        if (i % 2 == 0)
            ft_putchar(' '); //2개의 문자(16진수로 4개)마다 스페이스로 구분.
    }
            // 모자란 16진수 글자수 + 모자란 스페이스 수
    space = ((16 - size) * 2) + (19 - size) / 2;
    while (--space > 0)
        ft_putchar(' ');
    i = -1;

    //3번째 컬럼
    while (++i < size)
    {
        if (32 <= ch_part_addr[i] && ch_part_addr[i] <= 126)
            ft_putchar(ch_part_addr[i]);
        else
            ft_putchar('.'); //출력불가는 .으로 대체
    }
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int    char_each_line;
    unsigned int    offset; //기준 주소에 추가될 값. 16씩

    offset = 0;
    while (size > 0) //size가 0일 경우에 아무것도 출력되지 않아야 함.
    {
        if (size >= 16)
        {
            char_each_line = 16; //각 행에 출력해야하는 문자 수
            size -= 16;
        }
        else
        {
            char_each_line = size; // 마지막 행에 남은 문자 수
            size = 0; //더이상 출력할 문자 x
        }
        ft_put_addr(addr + offset);
        ft_putchar(':');
        ft_putchar(' ');
        ft_print_each_line(addr + offset, char_each_line);
        ft_putchar('\n');
        offset += 16; //주소 16씩 증가 (문자 16개 단위)
    }
    return(addr);    
}

int main(void)
{
    char *string;
	char *string2;
    //string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	string2 = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol.lol. ";
    ft_print_memory(string2, 0);
}
