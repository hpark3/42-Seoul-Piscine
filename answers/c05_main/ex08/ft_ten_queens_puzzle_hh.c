#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print(int *array)
{
	int i;
	i = 0;
	while (i < 10)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}
int		promising(int board[10], int x, int y)
{
	int index;
	index = 0;
	while (index < x)
	{
		if (y == board[index]
				|| x - index == y - board[index]
				|| x - index == board[index] - y)
			return (0);
		index++;
	}
	return (1);
}
void	nqueen(int board[10], int *count, int cdx)
{
	int i;
	i = 0;
	if (cdx == 10)
	{
		*count += 1;
		ft_print(board);
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (promising(board, cdx, i))
			{
				board[cdx] = i;
				nqueen(board, count, cdx + 1);
			}
			i++;
		}
	}
}
int		ft_ten_queens_puzzle(void)
{
	int table[10];
	int i;
	int count;
	i = 0;
	while (i < 10)
	{
		table[i] = -1;
		i++;
	}
	count = 0;
	nqueen(table, &count, 0);
	return (count);
}
int main(void)
{
	int a = ft_ten_queens_puzzle();
	printf("%d",a);
	return(0);
}