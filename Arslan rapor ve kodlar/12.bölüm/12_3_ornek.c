//FCLOSE FONKSYİONU İLE AÇILAN DOSYAYI KAPATAN PROGRAM

#include <stdio.h> 

int main(void) //main fonksiyonunun başlangıcı
{
	FILE *fp;
	fp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya1.txt","r");

	if(fclose(fp)!=EOF)
		printf("dosya başarıyla kapatıldı.");

	else 
		printf("dosya kapatma işlemi başarısız oldu !");

return 0;

} //main fonksiyonu sonu
