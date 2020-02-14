#include <unistd.h>
#include <stdlib.h>


int brackets (char *src, int i)
{
	int count;
	int direction;

	count = 0;
	if (src[i] == '[')
		direction = 1;
	else if (src[i] == ']')
		direction = -1;
	while (src[i] != '\0')
	{
		if (src[i] == '[')
			count++;
		else if (src[i] == ']')
			count--;
		if ((src[i] == '[' || src[i] == ']') && count == 0)
			return (i);
		i += direction;
	}
	return (0);
}

void brain (char *src)
{
	int i;
	int j;
	int *ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(char) * 2048);
	while (src[i] != '\0')
	{
		if (src[i] == '>')
			j++;
		else if (src[i] == '<')
			j--;
		else if (src[i] == '+')
			ptr[j]++;
		else if (src[i] == '-')
			ptr[j]--;
		else if (src[i] == '.')
			write(1, &ptr[j], 1);
		else if ((src[i] == '[' && !(ptr[j])) || (src[i] == ']' && ptr[j]))
			i = brackets(src, i);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc > 1)
		brain (argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}