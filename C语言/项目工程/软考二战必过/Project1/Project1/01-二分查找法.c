#include <stdio.h>
/**
 *  �۰���Һ���
 *
 *  @param arr   ����
 *  @param len   ���鳤��
 *  @param value ����Ԫ��
 *
 *  @return ���ز���Ԫ�ص�λ��
 */
int searchItem(int arr[], int len, int value) {
    int low = 0, high = len - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (value > arr[mid]) {
            low = mid + 1;
        }
        else if (value < arr[mid]) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    //�����������������
    int a[10] = { 1,2,31,45,52,62,73,86,90,100 };
    //����86Ԫ��
    int l = searchItem(a, 10, 85);
    printf("loc = %d\n", l);
    return 0;
}