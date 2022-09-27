#include <stdio.h>

int main()
{
	char ch = 'A';
	char str[20] = "Hello World";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;
	printf("Charater is %c\n", ch);
	printf("String is %c\n", str[20]);
	printf("Float value is %.6f\n", flt);
	printf("Integer value is %d\n", no);
	printf("Double value is %.6f\n", dbl);
	printf("Octal value is %o\n", no);
	printf("Hexadecimal value is %x", no);
}