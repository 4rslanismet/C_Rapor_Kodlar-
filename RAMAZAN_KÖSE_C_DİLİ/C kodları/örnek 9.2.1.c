#include<stdio.h>
#include<math.h>
int main()
{ 
int sayi;
double x;
	do	{
		printf("karekokunu almak istediginiz sayiyi  girin");
		scanf("%d",&sayi);
 		}while(sayi<0);
		x=sqrt(sayi);
 		printf(" %d 'sayisinin karekoku = %.2f ",sayi,x);
		getchar();getchar();
 		return 0;
 		}

