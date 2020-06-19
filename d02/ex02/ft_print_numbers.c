/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:31:23 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/19 09:54:09 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';

	while	(digit <= '9')
	{
		ft_putchar(digit);
		if	(digit == '9')
		{
			ft_putchar('\n');
		}
		digit++;
	}
}
