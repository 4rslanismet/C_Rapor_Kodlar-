//WHILE DÖNGÜSÜ İLE 100 KERE İSİM YAZDIRAN PROGRAM

#include <stdio.h>

int main ()//main fonksiyonu başlangıcı
{
	int sayac = 0; //sayaç tanımlaması

	while(sayac!=100)//sayac 100 'e eşit değilse döngüyü sürdür
	{
		printf("%d. İsmet ",sayac+1); // sayac değişkenini ve İsmet yazdır

	if(sayac%10==0)
		printf("\n");

		sayac++;
	}

	return 0;

}//main fonksiyonu sonu
