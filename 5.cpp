#include<stdio.h>
int word(int x)
{
    int a,b;
    a=x/10;
    b=x%10;
    if(x>20&&x!=30&&x!=40&&x!=50&&x!=60&&x!=70&&x!=80&&x!=90)
    {
    switch(a)
     {
        case 2:printf("\btwenty-");break;
        case 3:printf("\bthirty-");break;
        case 4:printf("\bforty-");break;
        case 5:printf("\bfifty-");break;
        case 6:printf("\bsixty-");break;
        case 7:printf("\bseventy-");break;
        case 8:printf("\beighty-");break;
        case 9:printf("\bninety-");break;
     }
     switch(b)
     {
        case 1:printf("\bone\n");break;
        case 2:printf("\btwo\n");break;
        case 3:printf("\bthree\n");break;
        case 4:printf("\bfour\n");break;
        case 5:printf("\bfive\n");break;
        case 6:printf("\bsix\n");break;
        case 7:printf("\bseven\n");break;
        case 8:printf("\beight\n");break;
        case 9:printf("\bnine\n");break;
     }
    }
    switch(x)
    {
        case 0:printf("\bzero\n");break;
        case 1:printf("\bone\n");break;
        case 2:printf("\btwo\n");break;
        case 3:printf("\bthree\n");break;
        case 4:printf("\bfour\n");break;
        case 5:printf("\bfive\n");break;
        case 6:printf("\bsix\n");break;
        case 7:printf("\bseven\n");break;
        case 8:printf("\beight\n");break;
        case 9:printf("\bnine\n");break;
        case 10:printf("\bten\n");break;
        case 11:printf("\beleven\n");break;
        case 12:printf("\btwelve\n");break;
        case 13:printf("\bthirteen\n");break;
        case 14:printf("\bfourteen\n");break;
        case 15:printf("\bfifteen\n");break;
        case 16:printf("\bsixteen\n");break;
        case 17:printf("\bseventeen\n");break;
        case 18:printf("\beighteen\n");break;
        case 19:printf("\bnineteen\n");break;
        case 20:printf("\btwenty\n");break;
        case 30:printf("\bthirty\n");break;
        case 40:printf("\bforty\n");break;
        case 50:printf("\bfifty\n");break;
        case 60:printf("\bsixty\n");break;
        case 70:printf("\bseventy\n");break;
        case 80:printf("\beighty\n");break;
        case 90:printf("\bninety\n");break;
    }
    return 0;
}
int main()
{
    int t,T,N;
    scanf("%d",&T);
    for(t=0;t<T;t++)
    {
        scanf("%d",&N);
        printf("%c",word(N));
    }
    return 0;
}
