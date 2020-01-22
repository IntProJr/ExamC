#include <unistd.h>

void	ft_putnbr(int num)
{
	char c;

	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

int		ft_atoi(char *str)
{
	int i;
	long value;
	int sign;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	value = 0;
	while (*str == '\t' || *str == '\v' || *str == '\r' ||
		*str == '\f' || *str == ' ')
		str++;
	if (*str == '+' || str == '-')
		if(*str == '-')
			sign *= -1;
	while(*str && *str >= '0' && *str <= '9')
	{
		value = value * 10 + *str - '0';
		str++;
	}

	return ((int)value * sign);

}
int		main(int argc, char *argv[])
{
	int value;
	int nbr;

	if (argc != 2)
	{
		write(1,"\n", 1);
		return (0);
	}
	else
	{

		nbr = 1;
		value = ft_atoi(argv[1]);
		while (nbr <= 9)
		{
			ft_putnbr(nbr);
			write(1, " x ", 3);
			ft_putnbr(value);
			write(1, " = ", 3);
			ft_putnbr(value * nbr);
			write(1,"\n", 1);
			nbr++;
		}
	}
	return (0);
}