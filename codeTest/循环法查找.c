int research(int r[],int low,int high, int key){
//r[low...high]�е�Ԫ�ذ��ǵݼ�˳�����У��ö��ַ�
//������r�в�����key��ͬ��Ԫ�أ����ҵ������±꣬���򷵻�-1��
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key == r[mid])
		{
			return mid;
		}
		else if (key<r[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}/*while*/
	return-1;
}/*research*/