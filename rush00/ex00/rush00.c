/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snouar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:40:50 by snouar            #+#    #+#             */
/*   Updated: 2021/08/07 17:10:20 by snouar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print(int x, int y, int x_limit, int y_limit);

void	rush(int x, int y)
{
	int	x_limit;
	int	y_limit;

	if (x <= 0 || y <= 0)
		return ;
	x_limit = x;
	y_limit = y;
	y = 1;
	while (y <= y_limit)
	{
		x = 1;
		while (x <= x_limit)
		{
			ft_print(x, y, x_limit, y_limit);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	ft_print(int x, int y, int x_limit, int y_limit)
{
	if ((x == 1 || x == x_limit) && (y == 1 || y == y_limit))
		ft_putchar('o');
	else if (x == 1 || x == x_limit)
		ft_putchar('|');
	else if (y == 1 || y == y_limit)
		ft_putchar('-');
	else
		ft_putchar(' ');
}
