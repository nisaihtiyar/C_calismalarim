#include <stdio.h>

//4.Soru-> Kullanıcıdan bir değer aralığı alıp o aralıktaki tüm asal sayıları yazdıran program yapınız

int main(){

    int altLimit,ustLimit,sorgu;
    int i,j;

    printf("Lutfen bir deger araligi giriniz: ");
    scanf("%d %d",&altLimit,&ustLimit);

    printf("Sectiginiz araliktaki asal sayilar sunlardir: \n");
    for(i=altLimit;i<ustLimit;i++){
        sorgu =0;
        for(j=2;j<i;j++){
            if(i%j==0){
                sorgu =1;
                break; // kalanina bakmaya gerek yok dongu burda sonlanir
            }
        }
        if(!sorgu){
            printf("%d \n",i);
        }
    }

    return 0;
}