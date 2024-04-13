#include<stdio.h>

//1 ile 1000 arasındaki tüm mükemmel sayıları yazdırma

int main(){

    int i,j,toplam;

    for(i=2;i<=1000;i++){
        toplam = 0;
        for(j=1;j<i;j++){
            if(i%j==0){
                toplam += j;
            }
        }
        if(i == toplam){
            printf("%d sayisi mukemmel sayidir. \n",i);
        }
    }

    return 0;
}