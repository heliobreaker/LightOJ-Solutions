//light oj 1008
/*Hints:
1. check the pattern
2. Convert square root of n to the nearest integer (greatest) sq
3. Find the difference between the number n and sq
4.Compare the difference
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int t,x,y,i,temp;
    long long int n,sq,r;
    scanf("%d",&t);
    for( i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        sq=ceil(sqrt(n));      //Here we have taken square root of given number and adjust it to the greatest nearest integer
        r=sq*sq-n;              //Here we have taken the difference between our given number and the square of the greatest nearest integer
        if(r<sq)                   //when difference between sq and n is less than sq
        {
            x=sq;
            y=r+1;
        }
        else
        {
            x=2*sq-(r+1);
            y=sq;
        }
        if(sq&1)
        {
            temp=x;
            x=y;
            y=temp;
        }
        printf("Case %d: %d %d\n",i,x,y);
    }
    return 0;
}
