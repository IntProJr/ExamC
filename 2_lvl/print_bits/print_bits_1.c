#include <unistd.h>


void	ft_putchar(char c)
{
	write (1, &c, 1);
	return;
}

void	print_bits_1(unsigned char octet)
{
	/*
	 * рекурсивный метод
	 */

	int r;

	r = octet % 2;
	if (octet >= 2)
	{
		print_bits_1(octet / 2);
	}
	ft_putchar (r == 0 ? '0' : '1');
	return;
}
