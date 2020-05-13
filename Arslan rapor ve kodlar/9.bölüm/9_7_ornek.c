//STRLEN FONKSİYONU VE SİZEOF FARKI

#include <stdio.h>
#include <string.h>

#define BOYUT 50

int main (void) //main fonksyionu başlangıcı
{
	char str[BOYUT]="nervus vagus";
	printf("strlen :%d\nsizeof:%d",strlen(str),sizeof(str));

	return 0;

} //main fonskyionu sonu

