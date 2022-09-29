void insertSort(int data[], int n) {
	/*用直接插入排序法将data[0]~data[n-1]中的n个整数进行升序排列*/
	int i, j;
	int tmp;
	for ( i = 0; i < n; i++)
	{
		if (data[i]<data[i-1])//将data[i]插入有序子序列data[0]~data[i-1]
		{
			tmp = data[i];    //备份待插入的元素
			data[i] = data[i - 1];
			for ( j = i-2; j>=0&&data[j]>tmp; j--)  //查找插入位置并将元素后移
			{
				data[j + 1] = data[j];
			}/*forj*/
			data[j + 1] = tmp;//插入正确位置
		}/*if*/    
	}/*fori*/
}/*insertSort*/