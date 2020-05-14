#include <stdio.h>
int main ()
{
int sayi;		
		printf("Bir sayi giriniz.");
		scanf("%d",&sayi);
	if(sayi>0){
		printf("0'dan büyüktür.\n ");
	}	
	else if (sayi<0){
		printf("0'dan küçüktür. \n ");}
	else{
		printf(" 0'dir. ");
	}
	return 0;
}

