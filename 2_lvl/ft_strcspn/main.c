#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	while (s[i])
		i++;
	return (i);
}

int main(void)
{
	char *s;
	char *reject;

	s = "dqstroka";
	reject = "iiiiistroka";
	/*
	 *  сколько символов строки s не содержится в строке reject до первого совпадения
	 */
	printf("Строка *s не содержит %d сиволов, как в строке *reject\n\n", ft_strcspn(s, reject));
	printf("Строка *s не содержит %d сиволов, как в строке *reject\n\n", strcspn(s, reject));
	return 0;
}