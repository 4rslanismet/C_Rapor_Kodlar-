#include<stdio.h>
#include<math.h>

int main()

{ 
	int x,y;
	int sonuc;
		printf("X uzeri y icin x ve y degerlerini giriniz:");
		scanf("%d%d",&x,&y);
            sonuc=pow(x,y);
            printf("%d uzeri %d = %d",x,y,sonuc);
          getchar();getchar();
          return 0;
}

