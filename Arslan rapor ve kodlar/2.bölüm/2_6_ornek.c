// HESAP MAKİNESİ

#include <stdio.h>

int main ()//main fonksiyonu başlangıcı
{
	int sayi1;
	int sayi2;
	int secim;
	
	
	printf("%s\n","1-TOPLAMA\n2-ÇIKARMA\n3-ÇARPMA\n4-BÖLME\n0-ÇIKIŞ\n\nLütfen yapmak istediğiniz işlemi giriniz:");

	scanf("%d",&secim);

	

	switch(secim)
	{ 
		case(0): // seçim 0 ise
		 {
			printf("%s\n","Çıkış yapılıyor...");

			return 0;
		}

		break;

		case(1): // seçim 1 ise
		{	
			printf("%s\n","Lütfen işle yapmak istedğiniz iki tam sayı değerini giriniz:" );

			scanf("%d%d",&sayi1,&sayi2);

			printf("Sonuc:%d",sayi1+sayi2 );
		}

		break;	

		case(2): // seçim 2 ise
		{	
			printf("%s\n","Lütfen işle yapmak istedğiniz iki tam sayı değerini giriniz:" );
			
			scanf("%d%d",&sayi1,&sayi2);

			printf("Sonuc:%d",sayi1-sayi2 );
		}

		break;

		case(3): // seçim 3 ise
		{
			printf("%s\n","Lütfen işle yapmak istedğiniz iki tam sayı değerini giriniz:" );

			scanf("%d%d",&sayi1,&sayi2);
			
			printf("Sonuc:%d",sayi1*sayi2 );
		}

		break;

		case(4):// seçim 4 ise
		{	
			printf("%s\n","Lütfen işle yapmak istedğiniz iki tam sayı değerini giriniz:" );

			scanf("%d%d",&sayi1,&sayi2);
			
			printf("Sonuc:%.3f",sayi1/sayi2 );
		}

		break;

		default: // geçersiz bir değer girilirse
			printf("%s\n","Geçersiz değer girildi\nÇıkış yapılıyor" );
			return 0;

	}

	return 0;

} // main fonksiyonu sonu