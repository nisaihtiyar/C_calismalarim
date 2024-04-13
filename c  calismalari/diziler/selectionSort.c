#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Seçmeli Sıralama algoritması ile , rastgele oluşturulan dizinin sıralanması.
/*
7 3 5 8 2 9 4 15 6-->sirasiz hali
	
	2 3 5 8 7 9 4 15 6->2 ile 7 yer değiştirildi.
	2 3 5 8 7 9 4 15 6->-
	2 3 4 8 7 9 5 15 6->4 ile 5 yer değiştiirldi.
	2 3 4 5 7 9 8 15 6->5 ile 8 yer değiştşrildi.
	2 3 4 5 6 9 8 15 7->6 ile 7 yer değiştirildi.
	2 3 4 5 6 7 8 15 9->7ile 9 yer değiştşrildi.
	2 3 4 5 6 7 8 15 9->-
	2 3 4 5 6 7 8 9 15 ->9 ile 15 yer değiştirildi.
	2 3 4 5 6 7 8 9 15 ->son hali.
*/


int main(){

    int dizi[10],i,j,indexKucukSayi,enKucukSayi;
	srand(time(NULL));
	printf("Sirasiz dizi:");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n");
	for(i=0;i<9;i++){
		enKucukSayi=dizi[9];
		indexKucukSayi=9;
		for(j=i;j<9;j++){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
		}
		printf("%d sayisi ile %d sayisi yer degisitirildi.\n",enKucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}
	printf("Sirali dizi:");
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}


    return 0;
}