#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **split;

	i = 0;
	j = 0;
	k = 0;

	split = (char **)malloc(sizeof(** split) * 256);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			split[j] = (char *)malloc(sizeof(char) * 4096);
			while (str[i] > 32)
			{
				split[j][k] = str[i];
				i++;
				k++;
			}
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = 0;
	return (split);
}


int main()
{
	char str[] = "abc def";

	printf("%s\n", *ft_split(str));
	printf("%s\n", ft_split(str));
	return 0;
}
