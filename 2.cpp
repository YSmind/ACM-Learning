#include<stdio.h>             //comprehend the information of topic
int main()
{
    double a,b,c,t,x,y,z,ch1;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    x=a-c;
    y=b-c;
    z=x/2-y;
    if(z<0)
        z=0-z;
    else
        z=z;
    ch1=x+z;
    int ch2=ch1;
    if(ch1>ch2)
        printf("%.1lf",ch1);
    else
        printf("%.0lf",ch1);
    return 0;
}
