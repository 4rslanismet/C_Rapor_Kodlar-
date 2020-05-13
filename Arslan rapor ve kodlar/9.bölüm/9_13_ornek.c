//STRCPY

#include <stdio.h>
#include <string.h>

#define BOYUT 50

int main (void) //main fonksyionu başlangıcı
{
	char str1[BOYUT]="deneme";
	char str2[BOYUT]="GNU/Linux";



strcpy(str1,str2);

printf("%s\n",str1);


	return 0;

} //main fonskyionu sonu

