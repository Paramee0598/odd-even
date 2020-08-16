#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<conio.h>

int caba(int n)
{
	return  n % 2 ;
}

int main()
{
	int N;
	N = 0;

	printf("input Number for check : ");
	scanf("%d", &N);

	int a;
	a = 0;
	a = caba(N);
	if (a == 1)
	{
		printf(" %d is odd ",N);
	}
	else 
		printf(" %d is even ", N);

	return 0;
}

