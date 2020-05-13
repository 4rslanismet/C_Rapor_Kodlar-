//FPUTC FONKSİYONU İLE DOSYAYA YAZMA İŞLEMİ

#include <stdio.h>
#define BOYUT 50

int main (void)//main fonksiyonunun başlangıcı 
{
	int i;
	FILE *dp;
	char katar[BOYUT];
	char str[]= "Nervus Vagus\n";
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya2.txt","w"); // dosyayı oluşturup yazma modunda açıyoruz

	for(i=0;str[i] !='\n';i++)
{
	fputc(str[i],dp);//katar dosyaya yazdırılıyor
}

fclose(dp); // dosya kapatılıyor

return 0;


}//main fonksiyonunun sonu


