/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:38:37 by kilee             #+#    #+#             */
/*   Updated: 2020/08/01 17:54:41 by kilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		make_base(int y, int *c_y, char *sbl)
{
	while (*c_y < y)
	{
		if (*c_y == 0)
			ft_putchar(sbl[0]);
		else if (*c_y > 0 && *c_y < y-1)
			ft_putchar(sbl[1]);
		else if (*c_y == y-1)
		{
			ft_putchar(sbl[2]);
			ft_putchar('\n');
		}	
		++*c_y;
	}
}

void		build_base(int x, int y)
{
	int c_x;
	int c_y;

	c_x = 0;
	c_y = 0;
	while (c_x < x)
	{
		if (c_x == 0)
		{
			make_base(y, &c_y, "ABA");
			c_y = 0;
			c_x++;
		}
		else if (c_x == x-1)
		{
			make_base(y, &c_y, "CBC");
			c_y = 0;
			c_x++;
		}
		else
		{
			make_base(y, &c_y, "B B");
			c_y = 0;
			c_x++;
		}
	}
}
	
void 		rush(int x, int y)
{
	build_base(x,y);
}

