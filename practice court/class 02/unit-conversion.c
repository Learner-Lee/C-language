# include <stdio.h> 

int main(){
    printf("请输入身高的英尺和英寸，"
          "请输入\"5 7\"表示5英尺7英寸：");

    int foot;
    int inch;

    scanf("%d %d",&foot,&inch);

    // 12 必须为浮点数，不然会自动删除小数部分 可写为12.0
    printf("身高是%f米。\n",
           ((foot + inch / 12.0) * 0.3048));


    return 0;
} 