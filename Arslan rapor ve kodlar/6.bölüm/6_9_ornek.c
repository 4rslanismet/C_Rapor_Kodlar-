//RECURSİV ŞEKİLDE FAKTÖRİYEL HESAPLAYAN PROGRAM

#include <stdio.h>

int faktoriyel (int x); // faktoriyel fonksiyonunun prototipi

int main (void) // main başlangıcı
{
	int sayi ;
	printf("%s","lütfen faktöriyelini hesaplamak istedğiniz sayıyı giriniz:");
	scanf("%d",&sayi);
	printf("%d!=%d",sayi,faktoriyel(sayi));
	
	return 0;
} //main sonu

int faktoriyel(int x) //  faktoriyel fonksiyonu tanımlaması
{
	if(x>=1) // x 1 'e eşit veya büyükse
		return x*faktoriyel(x-1);
	
	else 
		return 1;
} // faktoriyel fonksiyonunun sonu