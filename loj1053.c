#include<stdio.h>
int main()
{
    long long int a,b,c,x,y;int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a>b&&a>c)
        {
            x=a*a;
            y=b*b+c*c;
        }
        else if(b>a&&b>c)
        {
            x=b*b;
            y=a*a+c*c;
        }
        else if(c>a&&c>b)
        {
            x=c*c;
            y=a*a+b*b;
        }


        if(x==y)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}
