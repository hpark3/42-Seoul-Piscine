/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 00:36:45 by jiychoi           #+#    #+#             */
/*   Updated: 2021/03/28 22:36:39 by saan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_draw_y(int y, int height, char ch1, char ch2)
{
	if (height == 0 || height == y - 1)
	{
		ft_putchar(ch1);
	}
	else
	{
		ft_putchar(ch2);
	}
}

void	rush_draw(int x, int y, int height)
{
	int width;

	width = 0;
	while (width < x)
	{
		if (width == 0)
		{
			rush_draw_y(y, height, 'A', 'B');
		}
		else if (width == x - 1)
		{
			rush_draw_y(y, height, 'C', 'B');
		}
		else
		{
			rush_draw_y(y, height, 'B', ' ');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int height;

	height = 0;
	while (height < y)
	{
		rush_draw(x, y, height);
		ft_putchar('\n');
		height++;
	}
}
