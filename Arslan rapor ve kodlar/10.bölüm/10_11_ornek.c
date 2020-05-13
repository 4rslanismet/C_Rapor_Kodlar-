//LDEXP FONKSİYONU

#include <stdio.h>
#include <math.h>

int main (void) //main fonksiyonu başlangıcı
{
	double n=76.54;
	double eKuv=5.00;
	double deger=ldexp(n,eKuv);

printf("%.4f * 2^%.2f =%.4f",n,eKuv,deger);

	return 0;

}//main fonksiyonu sonu
