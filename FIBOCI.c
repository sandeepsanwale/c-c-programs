#include<conio.h>
#include<stdio.h>
int fib(int);
int main()
{
    int s;
//clrscr();
//gotoxy(20,13);
printf("enter any no. \n");
scanf("%d",&s);

fib(s);
getch();
}
int fib(int n)
{
int  a=1,b=0,i,c;
//printf("enter any no. \n");
//scanf("%d",&n);
for(i=1;i<=n;i++)
{

c=a+b;
a=b;
b=c;
printf("%d\t",a);
}
}
