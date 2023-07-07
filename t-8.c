#include<stdio.h>
#include<conio.h>
main()
{
   int num,t,count=0;
   clrscr();
   printf("enter the value=");
   scanf("%d",&num);
   for(t=1;t<=num;t++)
   {
      if(num%t==0)
      {
	     count++;
	  }
   }
   if (count ==2)
   {
      printf("\n %d is a prinme number",num);
   }
	else
   {
	 printf("\n %d is not prime number",num);
   }
   getch();
}
