#include <stdio.h>
#include <conio.h>

int main()
{
    int bdeger[5],sayilar[3],i,j,k,m,temp;

    for(i=0;i<3;i++){
    	printf("sabit sayilarin %d.sini giriniz\n",i+1);
        scanf("%d",&sayilar[i]);
    if(i>0){
    while(sayilar[i]==sayilar[i-1]||sayilar[i]==sayilar[i-2]){
			printf("sabit sayilarin %d.sini TEKRAR giriniz\n",i+1);
			scanf("%d",&sayilar[i]);}}
    }
    for(i=0;i<5;i++){
    	printf("b nin degerleri giriniz :\n");
        scanf("%d",&bdeger[i]);
    for( m =0; m<3; m++){
			while(bdeger[i] == sayilar[m]){
			printf("b degerini TEKRAR giriniz\n");
			scanf("%d",&bdeger[i]);}}
    }
    for(j=0;j<3;j++){
        for(i=0;i<2;i++){
            if(sayilar[i]>sayilar[i+1]){
                temp=sayilar[i];
                sayilar[i]=sayilar[i+1];
                sayilar[i+1]=temp;
            }
        }
    }
    int dizi[4];
    for(j=0;j<5;j++){
        dizi[0]=sayilar[0],dizi[1]=sayilar[1],dizi[2]=sayilar[2];dizi[3]=bdeger[j];
        for(k=0;k<4;k++){
            for(i=0;i<3;i++){
                if(dizi[i]>dizi[i+1]){
                    temp=dizi[i];
                    dizi[i]=dizi[i+1];
                    dizi[i+1]=temp;
                }
            }
        }
        if(!((dizi[2]-dizi[1])>1)){
            printf("b nin yanlis degerleri :  %d\n",bdeger[j]);
        }
    }
    
    getch();
    return 0;
}
