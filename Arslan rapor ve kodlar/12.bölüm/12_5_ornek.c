//FPUTS FONKSİYONU İLE DOSYAYA YAZMA İŞLEMİ

#include <stdio.h>


int main (void)//main fonksiyonunun başlangıcı 
{

	FILE *dp;
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya3.txt","w"); // dosyayı oluşturup yazma modunda açıyoruz

	fputs("Bu bir deneme yazısıdır, ",dp);//yazma işlemi
	fputs("döngü kullanmadık\n",dp);//yazma işlemi
	fputs("fputc fonksiyonundan daha kolay yazma işlemi yapıyor\n",dp);//yazma işlemi

fclose(dp); // dosya kapatılıyor

return 0;


}//main fonksiyonunun sonu


