#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,i,c;
     printf("enter two no.interval");
     scanf("%d%d",&a,&b);
     printf("prime no. between %d & %d are",a,b);
     while(a<b){
          c=0;


         for(i=2;i<=a/2;++i)
         {
             if(a%i==0)
         {
                 c=1;
                 break;
         }
         }
         if (c==0)
         {
             printf("%d\t",a);
         }
            ++a;

        }
                 getch();


}
