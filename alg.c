#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int hw()
{
	float a, b, c, d, f1, f2, f3,f4,count;
	a = 5500.00;
	b = 5600.00;
	c = 6600.50;
	d = 7600.05;
	f1 = a*0.15;
	f2 = b*0.15;
	f3 = c*0.15;
	f4 = d*0.15;
	count = f1 + f2 + f3 + f4;
	printf("Чаевые %5.2f", count);
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	hw();
}
