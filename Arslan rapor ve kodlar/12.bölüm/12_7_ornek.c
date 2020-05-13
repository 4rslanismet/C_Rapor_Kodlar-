//FGETS , FSCANF ve FGETC FONKSİYONLARININ KULLANIMI

#include <stdio.h>

int main (void)//main fonksiyonu başlangıcı
{
	FILE *dp;
	char buffer[30];
	char c;

	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya3.txt","r");

	printf("------satır okunuyor---------------\n");
	fgets(buffer, 50 ,dp);
	printf("%s\n",buffer);

	printf("---------veri okuma ve ayrıştırma-------\n");
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya3.txt","r"); //dosya pointerı yeniden konumlandırılıyor

	char katar1[10], katar2[2],katar3[20],katar4[2];
	fscanf(dp,"%s %s %s %s",katar1,katar2,katar3,katar4);

	printf("1. katar okunuyor|%s|\n",katar1);
	printf("2. katar okunuyor|%s|\n",katar2);
	printf("3. katar okunuyor|%s|\n",katar3);
	printf("4. katar okunuyor|%s|\n",katar4);

	printf("-----------tüm dosyayı oku--------------\n");
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya3.txt","r"); // pointer yeniden konumlandırılıyor

	while((c=getc(dp))!=EOF)
		printf("%c",c);

	fclose(dp);

	return 0;

}//main fonksiyonu sonu
