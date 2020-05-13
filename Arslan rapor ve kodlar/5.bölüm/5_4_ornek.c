//KULLANICIDAN İSMİNİ ALARAK HOŞGELDİNİZ YAZDIRAN PROGRAM

#include <stdio.h>

#define BOYUT 50

int main()//main fonksiyonun başlangıcı
{
	char isim[BOYUT];
	
	char karakter='i'; //kontrol karakteri
	int i=0; // döngü değişkeni

	printf("%s\n","isminizi giriniz:" );
	
	while(1)
	{
		scanf("%c",&karakter);

		if(karakter=='\n'){
			isim[i]='\0';
			break;
		}
		else
			isim[i]=karakter;

		i++;
	}
	
	i=0;

	printf("%s","Hoş geldiniz ");

	while (isim[i]!='\0')
	{
		printf("%c",isim[i]);

		i++;

	}

	return 0;

}
