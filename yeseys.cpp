#include<stdio.h>
int main() 
{
int a[3] = { 1,2,4 };
	int* p;
	p = a;
	*p++;
	printf("%d\n", *p);
	*(++p);
	
	printf("%d\n", *p);
 }