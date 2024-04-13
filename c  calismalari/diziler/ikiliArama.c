#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//İkili Arama algoritması ile, rastgele oluşturulan dizide değer arama.

int main(){

    //Baslangicta selection sort ile diziyi siralayip arama yapilir.
     int dizi[10],i,j,indexKucukSayi,enKucukSayi;
	srand(time(NULL));

    //random dizi olusturma
	printf("Sirasiz dizi:");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}

    printf("\n");

    //Diziyi siralama - selection sort ile siraladim herhangi biri kullanilabilir.
	for(i=0;i<9;i++){
		enKucukSayi=dizi[9];
		indexKucukSayi=9;
		for(j=i;j<9;j++){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
		}
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}
	printf("Sirali dizi:");
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}


    //Sirali dizi uzerinde ikili arama
    int ortanca,sol,sag,aradiginizSayi,bulunduMu=0;
	printf("\nLutfen aradiginiz sayiyi giriniz:");
	scanf("%d",&aradiginizSayi);
	sol=0;//index numaraları.
	sag=9;
	while(sol<=sag){
		ortanca=(sag+sol)/2;
		if(aradiginizSayi==dizi[ortanca]){
			bulunduMu=1;
			break;
		}
		else if(aradiginizSayi>dizi[ortanca]){
			sol=ortanca+1;
		}
		else{
			sag=ortanca-1;		
		}	
	}
	if(bulunduMu){
		printf("%d sayisi dizide bulunmustur.",aradiginizSayi);
	}
	else{
		printf("%d sayisi dizide bulunamamistir",aradiginizSayi);
	}

    return 0;
}