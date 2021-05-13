/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:52:11 by jiychoi           #+#    #+#             */
/*   Updated: 2021/03/28 22:29:16 by saan             ###   ########.fr       */
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
	int	width;

	width = 0;
	while (width < x)
	{
		if (width == 0 || width == x - 1)
		{
			rush_draw_y(y, height, 'o', '|');
		}
		else
		{
			rush_draw_y(y, height, '-', ' ');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	height;

	height = 0;
	while (height < y)
	{
		rush_draw(x, y, height);
		ft_putchar('\n');
		height++;
	}
}
