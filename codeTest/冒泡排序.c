void bubbleSort(int arr[],int cnt) {
	int temp;
	for (int i = 0; i < cnt-1; i++)        //��ѭ��Ϊ���������n��������n-1�Ρ�
	{
		for (int j = 0; j < cnt-1-i; j++)    //��ѭ��Ϊ�Ƚϴ�������i�˱Ƚ�n-i��
		{
			if (arr[j]>arr[j+1])         //����Ԫ�رȽϣ��������򽻻�
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}