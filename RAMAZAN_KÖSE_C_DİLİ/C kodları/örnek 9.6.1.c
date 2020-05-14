#include<stdio.h>
#include<math.h>
    int main()
    { 
		int x;
          double sonuc;
            printf("Bir sayi giriniz:");
            scanf("%d",&x);
            sonuc=sin(x);
            printf("Sinus%d = %d",x,sonuc);
          getchar();getchar();
          return 0;
    }

