//MODF FONKSİYONU

#include <stdio.h>
#include <math.h>

int main (void) //main fonksiyonu başlangıcı
{

	double n=564.55;
	double ondalik;
	double tam;

ondalik=modf(n,&tam);

printf("%.3f = %.3f + %.3f",n,tam,ondalik);

	return 0;

}//main fonksiyonu sonu
