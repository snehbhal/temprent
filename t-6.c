#include<stdio.h>
#include<conio.h>
main ()
{
   int a,n,f=1;
   clrscr();
   printf("enter the value=");
   scanf("%d",&n);
   for(a=1;a<=n;a++)
   {
      f=f*a;
   }
      printf("the factorial is %d",f);
   getch();
}
