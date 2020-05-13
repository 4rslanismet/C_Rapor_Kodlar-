//ERİŞMEK İSTEDİĞİMİZ DOSYAYA ERİŞİLEMEDĞİ DURUMDA DOSYA OLUŞTURAN PROGRAM

#include <stdio.h>

int main (void)//main fonksiyonu başlangıcı
{
	FILE *fp;
	fp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya1.txt","r");

	if(fp==NULL)
	{
		printf("dosyaya erişilemedi!\n\nDosya oluşturuluyor...\n");
		fp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya1.txt","w");
	}

	if(fp==NULL)
	printf("dosya oluşturulamadı ! ");

	else
	printf("dosya başarıyla oluşturuldu");

return 0;

} //main fonksiyonu sonu

