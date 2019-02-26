//light oj-1001

/*In this problem we have to distribute at most 20 problems between two computers.There are several solutions.I have tried to
    made the solution as easy as possible*/

#include<stdio.h>
int main()
{
    int n,p,i; //n=number of test case,p= number of problem
    int p1=0,p2=0;//p1=problems in  computer 1;p2=problems in  computer 1
    scanf("%d",&n);
    if(n>25)
    {
        printf("Test Case Limit Exceeded.");//Error handling
    }
    for( i=0;i<n;i++)
    {
         scanf("%d",&p);
         if(p>20)
         {
             printf("Error.");//Error handling
         }
         else if(p>10)
         {
             p1=p-10;
             p2=10;
         }
         else
         {
             p1=p,p2=0;
         }
         printf("%d %d\n",p1,p2);
    }
    return 0;
}
