/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:38:37 by kilee             #+#    #+#             */
/*   Updated: 2020/08/01 20:55:43 by kilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		make_line(int x, int *c_x, char *sbl)
{
	while (*c_x < x)
	{	
		if (*c_x == 0)
			ft_putchar(sbl[0]);
		else if (*c_x > 0 && *c_x < x-1)
			ft_putchar(sbl[1]);
		else if (*c_x == x-1)
			ft_putchar(sbl[2]);
		++*c_x;
	}
}
	
void 		make_square(int x, int y)
{
	int c_x;
	int c_y;

	c_x = 0;
	c_y = 0;
	while (c_y < y)
	{
		if (c_y == 0 | c_y == y-1)
		{
			make_line(x, &c_x, "o-o");
			ft_putchar('\n');
			c_x = 0;
			c_y++;
		}
		else
		{
			make_line(x, &c_x, "| |");
			ft_putchar('\n');
			c_x = 0;
			c_y++;
		}
	}
}

void		rush(int x, int y)
{
	if (x == 0 | y == 0)
		ft_putchar('\n');
	else
		make_square(x, y);
}
