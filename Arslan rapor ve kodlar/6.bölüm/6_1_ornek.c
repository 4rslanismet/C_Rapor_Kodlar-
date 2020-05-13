		#include <stdio.h>
			
		int topla(int sayi1, int sayi2) ; //fonksiyon prototipi
		
		int main(void) // main fonksiyonu başlangıcı
		{

			printf("2 ve 5  tam sayılarının toplamı :%d'dir\n",topla(2,5));
				
			return 0;
				
		}//main fonksiyonu sonu
				
			
		int topla ( int sayi1,int sayi2)// fonksiyon imzası
		{
			return sayi1+sayi2;
		}	//toplam  fonksiyonu sonu
		