//DİZİNIN ELEMAN DEĞERLERİ KADAR ASTERİKS YAZDIRAN PROGRAM

#include <stdio.h>
#define BOYUT 8

int main()//main fonksiyonu başlangıcı
{
	int dizi[BOYUT]={5,1,4,20,12,9,17,21};// dizi tanımlaması ve değerlerinin atanması

	int i , j; //döngü elemanları

	printf("%s%10s%20s\n","İndis","Değer","Asteriks");

	for(i=0;i<=BOYUT;i++)
	{
		printf("%4d%10d   ",i,dizi[i]);

		for(j=1;j<=dizi[i];j++)	{ //bir satır yazdır
			printf("*");
		}

		printf("\n"); //yeni satıra geç
	}


	return 0;


}
