#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	char sign;
	char was_sign;
	long num;

	i = 0;
	while(('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		++i;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	was_sign = sign;
	num = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (num < 0 && was_sign == -1)
			return (-1);
		else if (num < 0 && was_sign == -1)
			return (0);
	}
	return ((int)num *sign);
}

int 	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i)) //если делителей нет
			return (0);
		else
			i += 1;
	}
	return (1);
}



int main(int argc, char *argv[])
{
	long long sum;
	int num;

	if (argc == 2)
	{
		sum = 0;
		num = ft_atoi(argv[1]);
		while (num > 0)
		{
			if (is_prime(num--))
				sum	+= (num + 1);
		}

	}
	else
		write(1, "\n", 1);
	printf("Hello, add_prime_sum %d\n", sum);
	return 0;
}