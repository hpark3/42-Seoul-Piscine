/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerpark <hyerpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:12:46 by hyerpark          #+#    #+#             */
/*   Updated: 2021/04/11 21:48:56 by hyerpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_test(int *board, int x, int y)
{
	int i;

	i = -1;
	while (++i < x)
	{
		if (y == board[i] 
				|| i + board[i] == x + y 
				|| i - board[i] == x - y)
			return (0);
	}
	return (1);
}

void ft_pruning(int *board, int *row, int col)
{
	int i;
	int j;

	if (col == 10)
	{
		*row += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(board[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_test(board, col, i))
			{
				board[col] = i;
				ft_pruning(board, row, col + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int n_queen;

	n_queen = 10;
	int board[n_queen];
	int i;
	int row;

	i = -1;
	while (++i < n_queen)
		board[i] = -1;
	row = 0;
	ft_pruning(board, &row, 0);
	return (row);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}
