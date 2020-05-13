//KULLANICIDAN İSMİNİ VE SOY İSMİNİ ALIP İLK HARFLERİNİ DEĞİŞTİRİP YAZAN PROGRAM

#include <stdio.h>
#include <string.h>

int main () //main fonksiyonu başlangıcı
{
	char isim[50];
	char soy_isim[50];	
	char temp;

	printf("%s\n","lütfen isminizi giriniz:");
	scanf("%s",isim);


	printf("%s\n","lütfen soy isminizi giriniz:");
	scanf("%s",soy_isim);

	//isim ve soy ismin ilk harfleri değiştiriliyor

	temp=isim[0];
	isim[0]=soy_isim[0];
	soy_isim[0]=temp;


	


	printf("\nisim:%s\nsoy isim:%s\n",isim,soy_isim);

	return 0;

}	// main fonksiyonu sonu