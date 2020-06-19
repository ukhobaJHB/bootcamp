#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, sizeof(c));
}

void	ft_putnbr(int nb)
{
	char	char_arr;

	sprintf(char_arr, "%d", nb);
	ft_putchar(char_arr);
}

int		main(void)
{
	ft_putnbr(10);

	return 0;
}
