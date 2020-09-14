#include <stdio.h>
#include <conio.h>


int main()
{
	int eskare_sayisi, k, kenar, kucuk_parca, sonuc;
kare:
	printf("es karelerin sayisi giriniz (tek sayi olmali): \n");
	scanf("%d", &eskare_sayisi);
	if (eskare_sayisi % 2 == 0)
	{
		goto kare;
	}
	printf("birinci kare kac kere tekrar bolundu lutfen giriniz k: \n");
	scanf("%d", &k);
	printf("kalan buyuk karenin kenar uzunlugu giriniz: \n");
	scanf("%d", &kenar);
	for (int i = 0; i < k; i++)
	{
		kucuk_parca = (eskare_sayisi)-1;
		kucuk_parca = 2 * kenar / (kucuk_parca);
		kenar = kenar + kucuk_parca;
	}

	printf("\n\n\nbolmeden once karenin kenar uzunlugu :%d\n", kenar);

	getch();
	return 0;
}
