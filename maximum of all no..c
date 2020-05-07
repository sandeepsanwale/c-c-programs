#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
    int a,b,c,i;
    printf("enter value of the no. to which should be compare");
    scanf("%d",&a);
    b=INT_MIN;
    printf("enter the numbers ");
    for(i=1;i<=a;i++)
    {
        scanf("%d",&c);
        if(b>c)
        {
            b=c;
        }
    }
    printf("the maximum no. is %d ",c);
    getch();
}

