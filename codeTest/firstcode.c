#include<stdio.h>
int main()
{
	int vel;
	vel = add(2, 3);
	printf("%d\n", vel);
	printf("hello C\n");
	return 0;
}

int add(int a, int b)
{
	return a + b;
}