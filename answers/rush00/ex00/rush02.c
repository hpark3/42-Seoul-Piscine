/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saan <saan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:59:42 by saan              #+#    #+#             */
/*   Updated: 2021/03/28 22:33:53 by saan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_draw(int x, int y, int width, int height)
{
	if (height == 0)
	{
		if (width == 0 || width == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (height == y - 1)
	{
		if (width == 0 || width == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (width == 0 || width == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int width;
	int height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			rush_draw(x, y, width, height);
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
