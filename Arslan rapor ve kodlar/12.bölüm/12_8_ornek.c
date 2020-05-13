//GETC VE PUTC İLE İNTERAKTİF DOSYA İŞLEMLERİ

#include <stdio.h>

int main (void)//main fonksiyonu başlangıcı
{

	FILE *dp;
	char k;
	printf("Dosyaya veri giriniz\nÇıkış yapmak için tab tuşuna basınız\n");

 //dosya açılıyor
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya5.txt","w");

//yazma işlemi
	while((k=getchar()) != '\t')
		putc(k,dp);

//dosya kapatılıyor
	fclose(dp);

	printf("veri girişi yapıldı\n");

//okuma
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya5.txt","r");

	while((k=getc(dp))!=EOF)
		printf("%c",k);

	fclose(dp);

	return 0;

}//main fonksiyonu sonu
