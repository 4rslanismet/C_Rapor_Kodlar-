//STRCPM

#include <stdio.h>
#include <string.h>

#define BOYUT 50

int main (void) //main fonksyionu başlangıcı
{
	char str1[BOYUT]="nervus vagus";
	char str2[BOYUT]="nervus olfactorius";

	if(0==strcmp(str1,str2))
		printf("iki string eşit");
	else
		printf("iki string eşit değil");

	return 0;

} //main fonskyionu sonu

