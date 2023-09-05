# include <stdio.h>

int main(){
    int h1,m1;
    int h2,m2;

    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int t = t2 - t1;

    printf("时间差为%d小时%d分。", t/60,t%60);

    return 0;
}