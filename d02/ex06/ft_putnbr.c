/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:04:48 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/21 14:04:56 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, sizeof(c));
}

void	ft_putnbr(int nb)
{

	char	digit_arr[256];
	int		i;

	if		(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;	
	}

	sprintf(digit_arr, "%d", nb);

	i = 0;

	while	(nb)
	{
		ft_putchar(digit_arr[i]);
		i++;
		nb /= 10;
	}
	ft_putchar('\n');

}
