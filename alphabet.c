#include<stdio.h>
#include<conio.h>
void main()
{
char c;clrscr();
printf("enter the character");
scanf("%c",c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
getch();
}
