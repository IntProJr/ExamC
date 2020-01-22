#include <stdio.h>

int		nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

int	ft_atoi_base(const char *str, int base)
{
	int		i;
	int 	nbr;
	int		sign;

	if (!str[0] || (base < 2 || base > 16))
		return (0);
	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if	(str[i] == '-')
		{
			sign *= -1;
			i++;
		}
	}
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i]- '0');
		i++;
	}
	return (nbr * sign);
}

int main(int argc, char *argv[])
{
	int n;

	n = 14;
	if (argc == 2)
	{
		printf("result: %d\n", ft_atoi_base(argv[1], n));
	}
	return 0;
}
