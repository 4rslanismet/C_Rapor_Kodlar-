//DEĞER İLE FONKSİYON ÇAĞIRMA (CALL BY VALUE)
#include <stdio.h>

char degistir(char karakter); // degistir fonksiyonu prototipi

int main()//main fonksiyonu başlangıcı
{
   char karakter1='a';
   char karakter2=degistir(karakter1);
   printf("karakter1: %c\n", karakter1);
   printf("karakter2: %c\n", karakter2);

   return 0;
}



char degistir(char karakter) // degistir fonksiyonu tanımlaması
{
    karakter ++;
    return karakter;
}