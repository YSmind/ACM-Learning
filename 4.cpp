#include<stdio.h>
int main()
{
    int T,n,a,b,c;
    scanf("%d",&T);
    for(a=0;a<T;a++)
    {
        scanf("%d",&n);
        if(n<30)
            printf("�㲻����ò\n");
        else if(n>=60)
            printf("���Ǹ��ú���\n");
        else
            printf("��һ����ò\n");
    }
    return 0;
}
