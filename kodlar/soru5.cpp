#include <stdio.h>
#include <conio.h>

int main()
{
	int ogrenci, kalem, kalemtirasi, silgi, kalan, x, siniftaki_ogrenciler, kalan_kalem, kalan_kalemtirasi, kalan_silgi;
	printf("ogrencilerin sayisi giriniz:\n");
	scanf("%d", &ogrenci);

kalem1:
	printf("her ogrencinin aldigi kalem sayisi giriniz\n");
	scanf("%d", &kalem);
	if (kalem > ogrenci)
	{
		goto kalem1;
	}

kalemtiras:
	printf("her ogrencinin aldigi kalemtirasi sayisi giriniz\n");
	scanf("%d", &kalemtirasi);
	if (kalemtirasi > ogrenci)
	{
		goto kalemtiras;
	}

silgi1:
	printf("her ogrencinin aldigi silgi sayisi giriniz\n");
	scanf("%d", &silgi);
	if (silgi > ogrenci)
	{
		goto silgi1;
	}
kalan1:
	printf("tum malzemelerden kalan sayisi giriniz:\n");
	scanf("%d", &kalan);
	if (kalan > 3 * ogrenci)
	{
		goto kalan1;
	}

	siniftaki_ogrenciler = (3 * ogrenci - kalan) / (kalem + kalemtirasi + silgi);
	kalan_kalem = ogrenci - siniftaki_ogrenciler * kalem;
	kalan_kalemtirasi = ogrenci - siniftaki_ogrenciler * kalemtirasi;
	kalan_silgi = ogrenci - siniftaki_ogrenciler * silgi;
	printf("\n\n\nsiniftaki bulunan ogrenci sayisi: %d\nkalan kalem sayisi: %d\nkalan kalemtirasi sayisi: %d\nkalan silgi sayisi: %d\n", siniftaki_ogrenciler, kalan_kalem, kalan_kalemtirasi, kalan_silgi);

	getch();
	return 0;
}
