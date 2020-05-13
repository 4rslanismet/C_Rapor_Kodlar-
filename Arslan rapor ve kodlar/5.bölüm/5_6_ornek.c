//ASTERİKSLERDEN PİRAMİT YAZDIRAN PROGRAM

#include <stdio.h>

int main()//main fonksiyonu başlangıcı
{
    int i, j, l; //döngü değişkenleri

    
    for(i=1; i<=5; ++i,l=0)
    {
        for(j=1; j<=5-i; ++j) // boşlukları yazdırmak için kullandığımz döngü
        {
            printf("  ");
        }

        while(l != 2*i-1) // asteriksleri yazdırmak için döngümüz
        {
            printf("* ");
            ++l;
        }

        printf("\n");
    }
    
    return 0;

} //main fonskiyonu sonu 