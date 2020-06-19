/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:36:09 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/19 09:06:31 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	alphabet;

	alphabet = 'a';
	while(alphabet <= 'z')
	{
		ft_putchar(alphabet);
		if	(alphabet == 'z')
		{
			ft_putchar('\n');
		}
		alphabet++;
	}

	return 0;
}
