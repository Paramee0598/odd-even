#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<conio.h>

const  float P = 3.14285714;
float caba(float r)
{
	return P * r * r;
}

int main()
{
	float R;
	R = 0;

	printf("input circle radius  : ");
	scanf("%f", &R);

	float area;
	area = 0;
	area = caba(R);
	printf("area circle = %f", area);

	return 0;
}

