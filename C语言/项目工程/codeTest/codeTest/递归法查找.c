int research_rec(int r[], int low, int high, int key) {
	//r[low...high]�е�Ԫ�ذ��ǵݼ�˳�����У��ö��ַ�
	//������r�в�����key��ͬ��Ԫ�أ����ҵ������±꣬���򷵻�-1��
	int mid;
	if (low<=high)
	{
		mid = (low + high) / 2;
		if (key==r[mid])
		{
			return mid;
		}
		else if (key<r[mid])
		{
			return research_rec(r, low, mid - 1, key);
		}
		else
		{
			return research_rec(r, mid + 1, high, key);
		}
	}/*if*/
	return -1;
}/*research_rec*/