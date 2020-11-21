#include "stdio.h"
int main(){
int girilecekSayi;
int toplam=0;
int qalan;
printf("Please enter the number:");
scanf("%d",&girilecekSayi);
while (girilecekSayi != 0) {
qalan=girilecekSayi%10;
girilecekSayi++;
toplam+=qalan;
girilecekSayi=girilecekSayi/10;
}
printf("Stages:%d",qalan);
return 0;
}
