#include <stdio.h>
#include <string.h>

size_t  ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				i++;
				j++;
			}
			else
				return (i);
		}
		j++;
	}
}

int main(void)
{
	char *s;
	char *accept;

	s = "strqweasd";
	accept = "strqwezxc";
	printf("в строке s содержится первых символов %d одинаковых строке accept\n", ft_strspn(s, accept));
	printf("в строке s содержится первых символов %d одинаковых строке accept\n", strspn(s, accept));
	return 0;
}