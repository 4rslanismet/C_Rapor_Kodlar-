#include <stdio.h>
#include <stdlib.h>
int main(){
    int ay;
    printf("Ay degerini giriniz(1-12)= ");
    scanf("%d",&ay);  // Kullanýcýdan deðer girmesi beklenir
    
    switch(ay){
        case 1: printf("Girdiniginiz deger \"Ocak\" ayidir");  // Ekrana " yazdýrmak için \" yazmak lazým!!!
            break;
        case 2: printf("Girdiniginiz deger \"Subat\" ayidir");
            break;
        case 3: printf("Girdiniginiz deger \"Mart\"  ayidir");
            break;
        case 4: printf("Girdiniginiz deger \"Nisan\" ayidir");
            break;
        case 5: printf("Girdiniginiz deger \"Mayis\" ayidir");
            break;
        case 6: printf("Girdiniginiz deger \"Haziran\" ayidir");
            break;
        case 7: printf("Girdiniginiz deger \"Temmuz\" ayidir");
            break;
        case 8: printf("Girdiniginiz deger \"Agustos\" ayidir");
            break;
        case 9: printf("Girdiniginiz deger \"Eylul\" ayidir");
            break;
        case 10: printf("Girdiniðini deger \"Ekim\" ayidir");
            break;
        case 11: printf("Girdiniðini deger \"Kasim\" ayidir");
            break;
        case 12: printf("Girdiniðini deger \"Aralik\" ayidir");
            break;
        default: printf("Hatali islem sectiniz!!!");  //1-12 aralýðýndan farklý bir deðer girerse ekrana default yazdýrýlýr
            break;
    }
    printf("\n");
    system("pause");  // Kullanýcý herhangi bir tuþa basana kadar programý beklemeye alýr
    return 0;
}

