#include <stdio.h>

int main()
{
	int *pointer;
	int sayi=70;
	pointer=&sayi;

	printf("sayi değeri:%d\n",sayi);
	printf("sayi değişkeninin adresi:%p\n",&sayi);
	printf("pointerın sakladığı :%p\n",pointer);
	printf("pointerın işaret ettiği değer:%d\n",*pointer);
	printf("pointer adresi:%p\n",&pointer);
	

	return 0;

}