/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:43:28 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/19 16:52:40 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char d)
{
	write (1, &d, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';

	while	(a <= '9')
	{
		b = '0';

		while	(b <= '9')
		{			
			c = '0';
			while	(c <= '9')
			{
				d = '0';

				while	(d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					ft_putchar(',');
					ft_putchar(' ');

					d++;
				}

				c++;
			}

			b++;
		}

		a++;
	}
}
