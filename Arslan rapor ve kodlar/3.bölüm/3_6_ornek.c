//KULLANICI KLAVYEDEN 'q' GİRENE KADAR SÜREKLİ KARAKTER GİRİŞİ İSTEYEN PROGRAM

#include <stdio.h>

int main()//main fonksiyonu başlangıcı
{

	char c;

	for(;;)
	{
		puts("Lütfen bir karkter giriniz, sonlandırmak için q giriniz:");
		
		scanf("%c",&c);

		if(c=='q')
		{
			printf("%s\n","q girişi yapıldı programdan çıkış yapılıyor..." );
			break;
		}

	}

	return 0;
} // main fonksiyonu sonu
