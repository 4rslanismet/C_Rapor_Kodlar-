//STRNLEN

#include <stdio.h>
#include <string.h>

#define BOYUT 50

int main (void) //main fonksyionu başlangıcı
{
	char str[BOYUT]="nervus vagus";
	printf("maksimum=10 için :%d\n",strnlen(str,10));
	printf("maksimum=30 için:%d\n",strnlen(str,30));

	return 0;

} //main fonskyionu sonu

