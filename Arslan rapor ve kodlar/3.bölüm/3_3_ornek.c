//KLAVYEDEN GİRİLEN SAYININ BASAMAK SAYISINI BULAN PROGRAM

#include <stdio.h>

int main()//main fonksiyonu başlangıcı
{
    int sayi;
    int sayac = 0;
    
    printf("Sayiyi giriniz\n");
    scanf("%d", &sayi);

    do
    {
        sayi /= 10;
        sayac++;
    } while(sayi > 0);

    printf("Basamak Sayisi = %d", sayac);
    
    
    return 0;
    
} //main fonksiyonu sonu