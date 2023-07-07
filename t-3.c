#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
    int num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    do{
        count++;
        num =num/10;
      }while(num != 0);
    printf("Digits count = %d", count);
    getch();
}
