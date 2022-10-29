//划分函数

/*这个函数的作用就是对数组进行一个递归
*把数组划分为最小块 然后进行
合并排序->合并排序->合并排序。
*/
void mergeSort(int A[], int low, int high) {
	/*递归的边界条件是，原数组已经被划分为一个一个单独的数了。
	*也就是low = high的情况。 就会跳出递归。
	*/
	if (low < high) {
		//划分规则 中点 
		int mid = (low + high) / 2;
		mergeSort(A, low, mid);
		mergeSort(A, mid + 1, high);
		//一次划分 一次合并
		merge(A, low, mid, high);
	}
}


//合并函数


/*这个函数的作用是：
*将A[low..mid] 和 A[mid+1...high]
*这两段数据 进行合并排序 (卡牌算法)
*这里需要一个临时数组 来存放 A[]
*/
void merge(int A[], int low, int mid, int high) {
	int B[10];
	//B里暂存A的数据 
	for (int k = low; k < high + 1; k++) {
		B[k] = A[k];
	}
	/*这里对即将合并的两个数组
	*A[low..mid] 头元素 A[i]和 A[mid+1...high] 头元素  A[j]
	*进行一个头部的标记, 分别表示为数组片段的第一个元素
	*k 是目前插入位置。
	*/
	int i = low, j = mid + 1, k = low;
	//只有在这种情况下 才不会越界 
	while (i < mid + 1 && j < high + 1) {
		//A的元素暂存在B里，因为不能再A上原地操作，会打乱数据
		//这也是为什么二路归并排序(合并排序)空间复杂度是O(n)的原因 
		//我们这里把值小的放在前面，最后排序结果就是从小到大 
		if (B[i] > B[j]) {
			A[k++] = B[j++];
		}
		else {
			A[k++] = B[i++];
		}
	}
	//循环结束后，会有一个没有遍历结束的数组段。处理上文的情况2
	while (i < mid + 1)
		A[k++] = B[i++];
	while (j < high + 1)
		A[k++] = B[j++];
}


