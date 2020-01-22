#include <stdio.h>

unsigned int lcm (unsigned int a, unsigned int b)
{
	unsigned int nod;

	if (!a || !b || a == 0 || b == 0)
		return (0);
	if (a > b)
		nod = (a / b) + 1;
	else
		nod = (b / a) + 1;
	while (!((a % nod) == 0 && (b % nod) == 0))
		nod--;
	return ((a * b) / nod);
}
int main(void)
{
	unsigned int nok;

	printf("nok = %d", lcm(2, 5));
	return (0);
}

