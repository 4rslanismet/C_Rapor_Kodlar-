 #include <stdio.h>

int main ()
{


	int sayi=70;
	int *ptr=&sayi;
	int **ptrPtr=&ptr;



	printf("sayi:%d\nptr:%d\nptrPtr:%d",sayi,*ptr,**ptrPtr );

	return 0;
}