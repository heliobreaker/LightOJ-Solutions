#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)

int main()
{
    double r,area;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        area=(4-pi)*r*r+0.000000001;
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
