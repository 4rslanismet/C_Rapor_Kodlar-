//HIZLI SIRLAMA KULLANARAK KULLANICININ GİRDİĞİ DİZİYİ SIRALAYAN PROGRAM

#include<stdio.h>
#define BOYUT 11

void hizlisiralama(int dizi[BOYUT],int ilk,int son ); //hizlisiralama fonksiyon prototipi

int main() //main fonksiyonu başlangıcı
{

   int i ; //döngü değişkeni
   int dizi[BOYUT];



   for(i=0;i<BOYUT;i++) // sıralanacak dizinin elemanlarnın girilmesi
   {
      printf("%d.elemanı giriniz: ",i+1);
     scanf("%d",&dizi[i]);
   }


   printf("%s\n","Sıralanmamış dizi:"); //sırasız dizinin yazdırılması

   for(i=0;i<BOYUT;i++)
      printf(" %d",dizi[i]);
   
   hizlisiralama(dizi,0,BOYUT-1); //hizilisirala fonksiyon çağırısı

   printf("\n%s\n","Sıralanmış dizi:"); //sıralanmış dizinin yazdırılması

   for(i=0;i<BOYUT;i++)
      printf(" %d",dizi[i]);

   return 0;

} //main fonksiyonu sonu

void hizlisiralama(int dizi[BOYUT],int ilk,int son ){ //hizlisiralama fonksiyon tanımı
   
   int i, j; //döngü değişkenleri
   int  pivot, gecici; // pivot ve değişim için geçici değişken tanımlaması

   if(ilk<son){ //pivotun seçilmesi
      pivot=ilk;
      i=ilk;
      j=son;

      while(i<j){ //dizinin alt bölümlere ayrılarak sıralanması
         while(dizi[i]<= dizi[pivot] && i<son)
            i++;
         while(dizi[j]>dizi[pivot])
            j--;
         if(i<j){
            gecici=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=gecici;
         }
      }

      gecici=dizi[pivot];
      dizi[pivot]=dizi[j];
      dizi[j]=gecici;
      hizlisiralama(dizi,ilk,j-1);
      hizlisiralama(dizi,j+1,son);

   }
}
