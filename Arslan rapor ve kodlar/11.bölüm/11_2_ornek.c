
#include <stdio.h>

struct {
	char *isim;
	char *soy_isim;
int numara;
int  sira;

struct {
	int matematik;
	int ingilizce;
	int programlamaya_giris;
	}not;
	
} ogrenci;

int main (void) //main fonksiyonu başlangıcı;
{

	ogrenci.isim="İsmet";
	ogrenci.soy_isim="Arslan";
	ogrenci.numara=523133;
	ogrenci.sira=23;
	ogrenci.not.matematik=78; 
	ogrenci.not.ingilizce=89;
	ogrenci.not.programlamaya_giris=98;
	
	printf("Öğrenci ismi :%s\nÖğrenci soy ismi:%s\nÖğrenci numara:%d\nÖğrenci sıra:%d\n\tögrenci  notları\t\nmatematik:%d\ningilizce:\nprogramlamaya giris:%d\n",ogrenci.isim,ogrenci.soy_isim,ogrenci.numara,ogrenci.sira,ogrenci.not.matematik,ogrenci.not.ingilizce,ogrenci.not.programlamaya_giris);
	
	return 0;


} //main fonksiyonu sonu


