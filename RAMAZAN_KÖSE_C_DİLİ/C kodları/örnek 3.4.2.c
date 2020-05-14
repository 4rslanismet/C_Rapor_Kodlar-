#include <stdio.h>
int main(){
 int x,y,tercih;
 printf("___ MENU ___\n");
 printf("[1] Toplama\n");
 printf("[2] Cikarma\n");
 printf("[3] Carpma\n");
 printf("[4] Bolme\n");
 printf("Tercih Ettiginiz Islem Numarasi: ");
 scanf("%d",&tercih);
 switch (tercih){
  case 1:
   printf("Islem Yapilacak Sayilari Giriniz: ");
   scanf("%d %d",&x,&y);
   printf("Sonuc: %d",x+y);
   break;
  case 2:
   printf("Islem Yapilacak Sayilari Giriniz: ");
   scanf("%d %d",&x,&y);
   printf("Sonuc: %d",x-y);
   break;
  case 3:
   printf("Islem Yapilacak Sayilari Giriniz: ");
   scanf("%d %d",&x,&y);
   printf("Sonuc: %d",x*y);
   break;
  case 4:
   printf("Islem Yapilacak Sayilari Giriniz: ");
   scanf("%d %d",&x,&y);
   printf("Sonuc: %d",x/y);
   break;
  default:
   printf("Gecerli Bir Numara Girmediniz!");
 }
        return 0;
}

