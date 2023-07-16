#include<stdio.h>
int main()
{
	int arrA[] = { 1,2,3,4,5,6 };
	int subscript = research_rec(arrA, 0, 5, 7);
	if (subscript == -1)
	{
		printf("下标越界");
	}
	else
	{
		printf("下标为：");
		printf("%d", subscript);
	}
	printf("\n=============================");
	return 0;
}
