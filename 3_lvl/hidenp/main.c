#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;

	if (argc != 3)
	{
		ft_putchar('\n');
		return(0);
	}
	str1 = argv[1];
	str2 = argv[2];
	while (*str1)
	{
		while(*str2)
		{
			if (*str1 == *str2)
			{
				str1++;
				str2++;
				break;
			}
			str2++;
		}
		if (!(*str2) && *str1)
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putchar('1');
	ft_putchar('\n');
	return (1);
}
