#include<stdio.h>
#include<conio.h>
main ()
{
    int n,i,r=0,p;
    clrscr();
    printf("Enter the number=");
    scanf("%d",&n);
    i=n;
    while(i>0)
   {
	

       p=i%10;
       r=(r*10)+p;
       i=i/10;
   }
      if(n==r)
        {
	     printf("%d is pallindrom number",n);
	    }
	  else
	    {
	     printf("%d is not number pallindrome",n);
	    }
    getch();
}
