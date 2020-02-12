#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char 	*ft_itoa_base(int value, int base)
{
	int 	number;
	char 	str_base[] = "0123456789ABCDEF";
	int 	len;
	char	*result;

	len = 1;
	number = value;
	while (number /= base)
		++len;
	number = value;
	if (number < 0)
	{
		if (base == 10)
			++len;
		number = - number;
	}
	if ((result = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	result[len--] = '\0'; //???? = '0'
	if (number == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (number)
	{
		result[len--] = str_base[number % base];
		number /= base;
	}
	if (value < 0 && base == 10)
		result[0] = '-';
	return (result);
}


int main(void)
{
	int 	value;
	int		base;
	char	*str_value;

	value = 12512343;
	base = 8;
	str_value = ft_itoa_base(value, base);
	ft_putstr(str_value);
	return 0;
}
