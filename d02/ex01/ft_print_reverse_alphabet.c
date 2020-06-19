/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:36:09 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/19 09:21:02 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	alphabet;

	alphabet = 'z';
		while(alphabet >= 'a')
	{
		ft_putchar(alphabet);
		if	(alphabet == 'a')
		{
			ft_putchar('\n');
		}
		alphabet--;
	}

	return 0;
}
