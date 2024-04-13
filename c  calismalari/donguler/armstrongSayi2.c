#include <stdio.h>
#include <math.h>

/*5.Soru-> Girilen bir sayının Armstrong sayısı olup olmadığını sorgulayın.
		Armstrong Sayı= Sayı basamaklarının ayrı ayrı küpleri alınıp toplandığında kendisini veren sayı
		Örneğin 371 sayısı: 3^3+7^3+1^3=371
		NOT:Ekstra olarak, 1 ile 1000 arasındaki tüm Armstrong sayılarını yazdırmaya çalışabilirsiniz
*/

int main(){

    int toplam, basamak, temp;
    int i;

    printf("1 ile 1000 arasindaki armstrong sayilar sunlardir: \n");

    for(i=1;i<=1000;i++){
        toplam =0;
        temp =i;
        while(temp !=0){
            basamak = temp%10;
            toplam += pow(basamak,3);
            temp /= 10;
        }

        if(i == toplam){
        printf("%d \n",i);
        }
    }


    return 0;
}