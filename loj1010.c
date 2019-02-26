#include<stdio.h>
#include<math.h>
int main()
{
    int t,m,n,i,mn,ans,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&n);
        mn=m*n;
        if(m==1||n==1)
        {
            ans=mn;
        }
        else if(m==2&&n==2)
        {
            ans=mn;
        }
        else if(m==2)
        {
            x=(n/4)*4;
            if(n%4==1)
            {
                ans+=2;
            }
            else
            {
                ans+=4;
            }

        }
        else if(n==2)
        {
            x=(m/4)*4;
            if(m%4==1)
            {
                ans+=2;
            }
            else
            {
                ans+=4;
            }

        }
        else
        {
            ans=(mn+1)/2;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;

}
