 #include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;

    // 输入格式要与"%d %d"相同
    scanf("%d %d",&a,&b);

    printf("%d %d \n",a,b);

    scanf("%d,%d",&c,&d);

    printf("%d %d \n",c,d);

    // 需要有一个东西满足多余的空格
    scanf("%d %d ",&e,&f);

    printf("%d %d \n",e,f);

    return 0 ;
}