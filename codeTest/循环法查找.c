int research(int r[],int low,int high, int key){
//r[low...high]中的元素按非递减顺序排列，用二分法
//在数组r中查找与key相同的元素，（找到返回下标，否则返回-1）
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