#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
    char i;
	i = 'A';
	do 
	{
		printf("%c ", i);	
		i++;	
	} 
	while (i<='Z');
	getch();	
}
