#include<stdio.h>
int main()
{
    int T,n,a,b,c;
    scanf("%d",&T);
    for(a=0;a<T;a++)
    {
        scanf("%d",&n);
        if(n<30)
            printf("你不懂礼貌\n");
        else if(n>=60)
            printf("你是个好孩子\n");
        else
            printf("懂一点礼貌\n");
    }
    return 0;
}
