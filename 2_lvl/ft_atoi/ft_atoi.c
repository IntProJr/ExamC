/*
 * Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

 */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int value;
	int sign;

	i = 0;
	value = 0;
	sign = 1;
	if (str == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
		value = (value * 10) + (str[i++] - '0');
	return (value * sign);
}

int main(void)
{
	char s[] = "str oka1  2345   67890 \t\v\n\r\f  ";
	printf("%d", ft_atoi(&s));
	return (0);
}
//что с next line ?
// No newline at end of file$