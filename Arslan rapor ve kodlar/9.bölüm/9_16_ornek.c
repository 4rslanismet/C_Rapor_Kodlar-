//STRRCHR

#include <stdio.h>
#include <string.h>

#define BOYUT 100

int main (void) //main fonksyionu başlangıcı
{
	char str1[BOYUT]="GNU/Linux kerneli Linus Torvalds tarafından yazıldı";



printf("%s\n",strrchr(str1,'L'));


	return 0;

} //main fonskyionu sonu

