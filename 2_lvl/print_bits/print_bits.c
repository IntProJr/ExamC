#include <stdio.h>
#include <unistd.h>

void	print_bits_1(unsigned char octet);
void	print_bits2(unsigned char octet); // самый понятный
void	print_bits_3(unsigned char octet);
void	print_bits_4(unsigned char octet);
void	print_bits_5(unsigned char octet);





int main(void)
{
	char oct;

	oct = 2;
	printf("Hello, print_bits рекурсивно!\n");
	print_bits_1(oct);
	printf("\n\n");
	printf("Hello, print_bits_2!\n");
	print_bits2(oct);
	printf("\n\n");
	printf("Hello, print_bits_3!\n");
	print_bits_3(oct);
	printf("\n\n");
	printf("Hello, print_bits_4!\n");
	print_bits_4(oct);
	printf("\n\n");
	printf("Hello, print_bits_5!\n");
	print_bits_5(oct);

	return 0;
}