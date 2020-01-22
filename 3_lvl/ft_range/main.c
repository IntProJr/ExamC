#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr (int a)
{
	int	i;

	if (a < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-a);
		return;
	}
	i = a;
	while (i >= 10)
		i = i % 10;
	if (a >= 10)
		ft_putnbr(a / 10);
	a = a + '0';
	write(1, &a, 1);
}
/*
int 	*ft_range(int start, int end)
{
	int i;
	int *range;

	i = 0;
	range = (int*)(malloc(sizeof(int) * (end - start + 1)));
	if (!range)
		return (NULL);
	while (i < (end - start))
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	return (range);
}
*/
int		*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	range[i] = end;
	return (range);
}

int main(int argc, char *argv[])
{
	int start;
	int end;
	int *range;
	int len;
	int i;

	i = 0;
	if (argc != 3)
		return (NULL);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	len = end >= start ? end - start + 1 : start - end + 1;
	range = ft_range(start, end);
	while (range[i])
	{
		ft_putnbr(range[i]);
		i++;
		ft_putchar('\n');
	}
	printf("%s\n", range);
	return 0;
}
