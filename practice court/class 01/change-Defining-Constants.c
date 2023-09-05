 #include <stdio.h>

int main(){

    // 定义常量,如果不定义就是magic number（你不知道他是干什么的）
    // const 变量名最好全大写
    const int AMOUNT = 100; // const 表示变量可以赋初值但不能修改
    int price = 0;

    // AMOUNT = 90;  不可被赋值

    printf("请输入金额（元）：");
 
    scanf("%d" , &price);

    int change = AMOUNT - price;

    printf("找您%d元\n",change);

    return 0 ;
}