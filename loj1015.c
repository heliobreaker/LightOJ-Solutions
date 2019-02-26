#include<stdio.h>
int main()
{
    int t,s,i,j,sum,u;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&s);
        for(j=1;j<=s;j++)
        {
            scanf("%d",&u);
            if(u>0)
                sum+=u;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
