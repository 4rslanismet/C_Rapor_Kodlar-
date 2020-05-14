#include<stdio.h>
#include<math.h>

int main()

    { 
	double x;

            printf("Bir ondalik  sayi giriniz (ondalik olmasi icin araya Nokta koyunuz):");
            scanf("%lf",&x);
            printf("Floor icin = %f \n",floor(x));
            printf("Ceil icin = %f",ceil(x));
          getchar();getchar(); getchar();getchar();
          return 0;
    }

