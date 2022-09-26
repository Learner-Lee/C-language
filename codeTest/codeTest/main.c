#include<stdio.h>
int main()
{
	int arrA[] = { 2,1,3,6,4,5 };
	int n = sizeof(arrA) / sizeof(arrA[0]);//确定数组长度。
	printf("数组长度 = %d\n", n);

//	insertSort(arrA, n);//插入排序
//	bubbleSort(arrA,n);//冒泡排序
	QuickSort(arrA, 0, n);
	printf("数组为：\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arrA[i]);
	}

	return 0;
}