#include <stdio.h>
#include <conio.h>

int main()
{
	int a_arti_b, a_carbi_b, a2_arti_b2;
	puts("a arti b degerini giriniz :");
	scanf("%d", &a_arti_b);
	puts("a carbi b degerini giriniz : ");
	scanf("%d", &a_carbi_b);
	a2_arti_b2 = (a_arti_b * a_arti_b) - (2 * a_carbi_b);
	printf("a^2 + b ^2 = %d", a2_arti_b2);

	getch();
	return 0;
}
