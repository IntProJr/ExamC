#include <stdio.h>
#include <stdlib.h>

int 	how_many_digits(int num)
{
	int digit_count = 0;

	while (num > 0)
	{
		digit_count++;
		num /= 10;
	}
	return digit_count;
}

char	*ft_itoa(int nbr)
{
	char *str;
	int digit_count;

	digit_count = 0;
	if (nbr < 0 )
	{
		nbr = -1 * nbr;
		digit_count++;
	}
	digit_count += how_many_digits(nbr);
	str = malloc(sizeof(char) * (digit_count + 1));
	str[digit_count] = '\0';
	while (nbr > 0)
	{
		str[digit_count - 1] = nbr % 10 +'0';
		nbr = nbr / 10;
		digit_count--;
	}
	if (digit_count == 1)
		str[0] = '-';
	return (str);
}


int main()
{
	char *str = ft_itoa(45678);
	printf("%s", str);
	free(str);
	str = NULL;
	return 0;
}
