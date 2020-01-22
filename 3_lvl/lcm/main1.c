/*
 * #include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	nod;

	if (!a || !b)
		return (0);
	if (a > b)
		nod = (a / 2) + 1;
	else
		nod = (b / 2) + 1;
	while (!((a % nod) == 0 && (b % nod) == 0))
		nod--;
	return (a * b / nod);
}

int main()
{
	unsigned int nok;

	nok = lcm(22, 80);
	printf("nok = %d\n", nok);
	return 0;
}
*/