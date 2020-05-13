//FREXP FONKSİYONU

#include <stdio.h>
#include <math.h>

int main (void) //main fonksiyonu başlangıcı
{
	double n=0.54;
	int eKuv;
	double deger=frexp(n,&eKuv);

printf("%.2f = :%.2f * 2^%d",n,deger,eKuv);

	return 0;

}//main fonksiyonu sonu
