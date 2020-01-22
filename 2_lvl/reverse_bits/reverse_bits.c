#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	//return (octet >> 4 | octet << 4);
//	return  (((octet >> 0) & 1) << 7) | \
//			(((octet >> 1) & 1) << 6) | \
//			(((octet >> 2) & 1) << 5) | \
//			(((octet >> 3) & 1) << 4) | \
//			(((octet >> 4) & 1) << 3) | \
//			(((octet >> 5) & 1) << 2) | \
//			(((octet >> 6) & 1) << 1) | \
//			(((octet >> 7) & 1) << 0);
	int i;
	unsigned char result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}

int main(void)
{
	char oct;

	oct = 100;
	printf("Hello, reverse bits %c\n", reverse_bits(oct));
	return 0;
}