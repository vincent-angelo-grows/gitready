#include <stdio.h>
int main()
{
	printf("selamat datang \n");
	printf("-------------------------------\n");
	
	/*
	int umur;
	char i[101];	
	scanf("%[^\n]",i);
	getchar ();
	printf("Input Nama : %s\n",i);
	scanf("%d",&umur);
	printf("Input Umur : %d\n",umur);
	
	*/
	
	
	//bikin segitiga
	int tinggi;
	scanf("%d",&tinggi);
	for(int i=1;i<=tinggi;i++)
	{
		for(int b=1; b<=tinggi-i;b++)
		{
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
