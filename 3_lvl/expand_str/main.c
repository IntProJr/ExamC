#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int flag;
	int n;

	if (argc == 2)
	{
		i = 0;
		flag = 1;
		n = 3;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag)
				{
					while (n > 0)
					{
						write(1, " ", 1);
						n--;
					}
				}
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	return 0;
}
