void insertSort(int data[], int n) {
	/*��ֱ�Ӳ������򷨽�data[0]~data[n-1]�е�n������������������*/
	int i, j;
	int tmp;
	for ( i = 0; i < n; i++)
	{
		if (data[i]<data[i-1])//��data[i]��������������data[0]~data[i-1]
		{
			tmp = data[i];    //���ݴ������Ԫ��
			data[i] = data[i - 1];
			for ( j = i-2; j>=0&&data[j]>tmp; j--)  //���Ҳ���λ�ò���Ԫ�غ���
			{
				data[j + 1] = data[j];
			}/*forj*/
			data[j + 1] = tmp;//������ȷλ��
		}/*if*/    
	}/*fori*/
}/*insertSort*/