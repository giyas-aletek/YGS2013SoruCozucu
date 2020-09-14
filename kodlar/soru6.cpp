#include <stdio.h>
#include <conio.h>

int main()
{
	int i, x, cubuk = 1, artilacak, boncuk[i][x], toplam, son;
	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < cubuk; x++)
		{
			if (i == 0 && x == 0)
			{
				printf("apakusun cubuk sayisi giriniz :\n");
				scanf("%d", &cubuk);
				printf("1. cubuktaki boncuk sayisi giriniz :\n");
				scanf("%d", &boncuk[0][0]);
				printf("1. cubuk ile 2. cubuk artilma miktari giriniz :\n");
				scanf("%d", &artilacak);
				printf("son boncuk sayisi giriniz :\n");
				scanf("%d", &son);
				toplam = boncuk[0][0];
				continue;
			}
			if (x == 0 && i != 0)
			{
				boncuk[i][x] = boncuk[i - 1][0] + boncuk[i - 1][4];
			}
			else
			{
				boncuk[i][x] = boncuk[i][x - 1] + artilacak;
			}
			toplam = toplam + boncuk[i][x];
			if (toplam >= son)
			{
				printf("\n\n\n  ..............  %d. boncuk %d. turda ve %d cubukta bulunacak  ....................\n", son, i + 1, x + 1);
				goto son;
			}
		}
	}

son:
	getch();
	return 0;
}
