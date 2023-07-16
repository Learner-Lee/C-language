void bubbleSort(int arr[],int cnt) {
	int temp;
	for (int i = 0; i < cnt-1; i++)        //外循环为排序次数，n个数进行n-1次。
	{
		for (int j = 0; j < cnt-1-i; j++)    //内循环为比较次数，第i趟比较n-i次
		{
			if (arr[j]>arr[j+1])         //相邻元素比较，若逆序则交换
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}