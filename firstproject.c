# include <stdio.h>//引入头文件；使用printf函数；必不可少。
int main()
{
	printf("Hello World\n");
	int a=add(2, 3);
	printf("%d",a);
	return 0;
}
int add(int a, int b)
{
	return a + b;

}
