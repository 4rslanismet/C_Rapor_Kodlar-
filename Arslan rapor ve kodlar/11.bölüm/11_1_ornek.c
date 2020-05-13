
#include <stdio.h>

struct ogrenci{
	char *isim;
	char *soy_isim;
int numara;
int  sira;
} ogrenci;

int main (void) //main fonksiyonu başlangıcı;
{

	ogrenci.isim="İsmet";
	ogrenci.soy_isim="Arslan";
	ogrenci.numara=523133;
	ogrenci.sira=23;
	
	printf("Öğrenci ismi :%s\nÖğrenci soy ismi:%s\nÖğrenci numara:%d\nÖğrenci sıra:%d",ogrenci.isim,ogrenci.soy_isim,ogrenci.numara,ogrenci.sira);
	
	return 0;


}

