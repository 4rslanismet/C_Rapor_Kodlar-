//İLKEL VERİ TİPLERİNİN BOYUTUNU ÖĞRENME

#include <stdio.h>

int main ()//main fonksiyonu başlangıcı
{
	int integer=70;
	float flo=70.000;
	char c='A';

	printf("integer:%d\nfloat:%d\nchar:%d\n",sizeof(integer),sizeof(flo),sizeof(c));

	return 0;
}