//VAR OLAYAN DOSYANIN KONTROLÜ

#include <stdio.h>

int main (void) // main fonksiyonu başlangıcı
{
	FILE *fp;
	fp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/test.c","r");
	if(fp==NULL)
		printf("erişmek istenilen dosya bulunamadı");

return 0;

} //main fonksiyonu sonu
