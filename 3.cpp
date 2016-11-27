#include<stdio.h>
int main()
{
    int a,b,c,n,m,i;
    b=0;
    scanf("%d %d",&n,&m);
    i=n*m;
    while((c=getchar())!=EOF)
    {
        for(a=0;a<i;a++)
        {
            scanf("%d",&c);
            if(c==1)
                b+=1;
            else
                b=b;
        }
        if(a==i)
            break;
    }
    printf("%d",b);
    return 0;
}
