//TANH FONKSİYONU

#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) //main fonksiyonu başlangıcı
{
	double deger = 0.23;
	double radyan;

	radyan=tanh(deger);

	printf("%.4lf nin hiperbolik tanjantı : %.4lf dir",deger,radyan);


	return 0;
} //main fonksiyonu sonu


