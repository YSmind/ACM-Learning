#include<stdio.h>
int main()
{
    int T,n,a,b,c,x,y;
    scanf("%d ",&T);
    for(a=0;a<T;a++)
      {
        scanf("%d ",&n);
        char ch[100];    //不必用数组
        x=0;
        y=0;
        for(b=0;b<n;b++)
        {
            scanf("%d",&c);    //可以依次录入数字
            if(c%2==0)
                x=x+c;
            if(c%2==1)
                y=y+c;
        }
        printf("%d %d\n",x,y);
      }
    return 0;
}
