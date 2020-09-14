#include <stdio.h>
#include <conio.h>

int main()
{
	int p[5], asal_sayilar[5], m, x,s;
	for (int i = 0; i < 5; i++)
	{
		printf("asal sayilarin %d. sini giriniz :", i + 1);
		scanf("%d", &asal_sayilar[i]);
		for (int j = 2; j < asal_sayilar[i]; j++)
		{
			while (asal_sayilar[i] % j == 0)
			{
				printf("girdiginiz sayi asal degildir lutfen tekrar giriniz: \n");
				i--;
				break;
			}
		}
		p[i] = asal_sayilar[i] + 2;
		puts("...............................");
	}
	
	

	for (int j = 0; j < 5; j++)
	{
	out:
		x = 0;
		for (int z = 2; z < p[j]; z++)
		{
			if (p[j] % z == 0)
			{	x++;
				m = z;
				s = p[j]/z;
				for (int q = 2; q < m; q++)
				{
					if (m % q == 0)
					{
						break;
					}
					if (q + 1 == m)
					{
						for (int b = 2; b <s; b++)
						{
							if (s % b == 0)
							{
								break;
							}
							if (b + 1 == s)
							{
								printf("\n\n\n%d sayisi chen asalidir cunku %d sayisi iki asal sayinin carbimi biciminde yazilabilir\n", p[j] - 2,p[j]);
								j++;
								goto out;
							}
						}
					}
				}
			}
			if(x<1&&z+1==p[j]){printf("\n\n\n%d sayisi chen asalidir cunku %d sayisi asal sayidir\n", p[j] - 2,p[j]);
			}
			}
	
	}

	getch();
	return 0;
}
