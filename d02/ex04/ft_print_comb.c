/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:00:54 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/19 11:01:06 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_putchar(char d)
{
	write (1, &d, 1);
}

void ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';

	while	(a <= '9')
	{
		b = a + 1;

		while	(b <= '9')
		{
			c = b + 1;

			while	(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');

				c++;
			}

			b++;
		}

		a++;
	}

	ft_putchar('\n');
}
