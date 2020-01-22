#include <unistd.h>

void ft_putbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if
}
