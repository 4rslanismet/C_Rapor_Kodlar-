//FPRİNTF FONKSİYONU İLE DOSYAYA YAZMA İŞLEMİ

#include <stdio.h>


int main (void)//main fonksiyonunun başlangıcı 
{

	FILE *dp;
	dp=fopen("/home/v4gus/Desktop/c_dersleri/11.Dosya işlemleri/dosyalar/dosya4.txt","w"); // dosyayı oluşturup yazma modunda açıyoruz

	fprintf(dp,"GNU/Linux\n");//yazma işlemi

fclose(dp); // dosya kapatılıyor

return 0;


}//main fonksiyonunun sonu


