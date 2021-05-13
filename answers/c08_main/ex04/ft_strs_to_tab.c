/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:48:28 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/13 22:07:50 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int	i;

	dest = NULL;
	// strlen은 순수 문자열의 길이를 구하기 때문에 마지막에 null 문자 들어갈 공간 위해 +1해줌
	// malloc : memory allocation
	dest = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int	ac, char **av)
{
	int	i;
	t_stock_str	*str;
	
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strcpy(av[i]);
		i++;
	}
	//str[i].size = 0;
	//str[i].str = 0;
	//str[i].copy = 0;
	str[i] = (t_stock_str){0, 0, 0};
	return (str);
}

//int					main(int argc, char **argv)
//{
//	int					index;
//	struct s_stock_str	*structs;

//	structs = ft_strs_to_tab(argc, argv);
//	index = 0;
//	while (index < argc)
//	{
//		printf("%d\n", index);
//		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
//		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
//		printf("\t|     size : %d\n", structs[index].size);
//		index++;
//	}
//}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int num)
{
	char *base;

	base = "0123456789";
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &base[num % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

int					main(void)
{
	int					index;
	int					ac;
	char				**av;
	struct s_stock_str	*structs;

	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = 0;
	while (index < ac)
	{
		av[index] = (char *)malloc((2 + 1) * sizeof(char));
		av[index][0] = 'x';
		av[index][1] = (char)(index + 'a');
		av[index][2] = '\0';
		index++;
	}
	structs = ft_strs_to_tab(ac, av);
	index = 0;
	while (index < ac)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
	printf("---- SHOW TAB\n");
	ft_show_tab(structs);
}
