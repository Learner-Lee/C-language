#include<stdio.h>
int main()
{
	int arrA[] = { 2,1,3,6,4,5 };
	int n = sizeof(arrA) / sizeof(arrA[0]);//ȷ�����鳤�ȡ�
	printf("���鳤�� = %d\n", n);

//	insertSort(arrA, n);//��������
//	bubbleSort(arrA,n);//ð������
	QuickSort(arrA, 0, n);
	printf("����Ϊ��\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arrA[i]);
	}

	return 0;
}