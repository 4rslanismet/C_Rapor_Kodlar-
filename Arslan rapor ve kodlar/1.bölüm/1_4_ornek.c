//BEŞ KİŞİLİK SINIFIN NOT ORTALAMASINI BULMA

#include <stdio.h>

int main()//main fonksiyonunun başlangıcı
{
	int ogrenci1=100;
	int ogrenci2=20;
	int ogrenci3=90;
	int ogrenci4=65;
	int ogrenci5=45;

	float ortalama = (ogrenci1+ogrenci2+ogrenci3+ogrenci4+ogrenci5)/5; //ortalama değerine 5 öğrencinin notları toplamının 5'e bölünü ata
	
	printf("ögrencilerin not ortalaması:%.2f\n",ortalama );//ortalama değerini yazdır
	
	return 0;
}//main fonksiyonu sonu
