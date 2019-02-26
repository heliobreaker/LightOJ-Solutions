#include<stdio.h>
int main()
{
    int i,t,cf,lf,res,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        res=0;
        scanf("%d %d",&cf,&lf);
        if(cf>lf)
        {
            k=cf+(cf-lf);
            res=(k*4)+19;
        }
        else
        {
            res=(lf*4)+19;
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
