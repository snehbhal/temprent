#include<stdio.h>
#include<conio.h>
main()
{
   int a=0,b=1,n,v,i;
   clrscr();
   printf("enter the value=");
   scanf("%d",&n);
   printf("%d,%d,",a,b);
   for(i=2;i<=n;i++)
   {
      v=a+b;
      a=b;
      b=v;
      printf("%d,",v);
   }
   getch();
}
