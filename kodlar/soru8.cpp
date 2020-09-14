#include <stdio.h>
#include <conio.h>

int main()
{
	double ex1, ex2, ey1, ey2, dx1, dy1, md, p, apsis;
	printf("e dogrusunun uzerinde birinci noktaninin apsisi girin: \n");
	scanf("%lf", &ex1);
	printf("e dogrusunun uzerinde birinci noktaninin ordinati girin: \n");
	scanf("%lf", &ey1);
	printf("e dogrusunun uzerinde ikinci noktaninin apsisi girin: \n");
	scanf("%lf", &ex2);
	printf("e dogrusunun uzerinde ikinci noktaninin ordinati girin: \n");
	scanf("%lf", &ey2);
	printf("d dogrusunun e dogrusu ile kesisim noktasinin ordinati girin: \n");
	scanf("%lf", &dy1);

	md = (ex1 - ex2) / (ey1 - ey2);
	md = -1 * md;
	printf("\n\nd dogrusu e dogrusuna dik\nd dogrusunun egimi %0.1lf\n", md);
	dx1 = (((dy1 - ex1) * (ex2 - ex1)) / (ey2 - ey1)) + ex1;
	p = dy1 - md * dx1;
	printf("d dogrusunun yy' kesisim noktasi ( 0 , %0.1lf)\n", p);
	apsis = -p / md;
	printf("\n ......d dogrusunun y=0 noktasindaki apsisi = ((( %0.1lf ))) ......\n", apsis);

	getch();
	return 0;
}
