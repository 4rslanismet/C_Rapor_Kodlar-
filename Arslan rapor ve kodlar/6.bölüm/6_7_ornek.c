//DEĞER İLE FONKSİYON ÇAĞIRMA (CALL BY VALUE)
#include <stdio.h>

char degistir(char *kar1,char *kar2); // degistir fonksiyonu prototipi

int main()//main fonksiyonu başlangıcı
{
   char karakter1='i';
   char karakter2='a';

   printf("ilk durum\nkarakter1: %c\nkarakter2: %c\n",karakter1,karakter2);
   
   degistir(&karakter1,&karakter2);

   printf("\ndeğişme işleminden sonra\nkarakter1: %c\nkarakter2: %c\n",karakter1,karakter2);

   return 0;
}



char degistir(char *kar1,char *kar2) // degistir fonksiyonu tanımlaması
{
    char gecici=*kar1;
    *kar1=*kar2;
    *kar2=gecici;

    printf("\n\ndeğişim işlemi\nkar1:%c\nkar2:%c\n",*kar1,*kar2);
    
}