#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x, y, x_y, y_mutlak, toplam;
	puts("y-x degerini giriniz:");
	scanf("%f", &x_y);
	puts("y - |x - y| degerini giriniz:");
	scanf("%f", &y_mutlak);
	y = y_mutlak + fabs(x_y);
	x = y - x_y;
	toplam = x + y;
	printf("\n\nx + y = \n%0.2f + %0.2f = %0.2f", x, y, toplam);
	getch();
	return 0;
}
