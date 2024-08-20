# include <stdio.h>
# include <conio.h>
# include <graphics.h>
void main()
{
int Major_axis,Minor_axis,a,b,x,y,xprev,yprev;
float p,;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
clrscr();

printf("\n\n\tEnter Value of Major axis and Minor axis ");
scanf("%d %d",&Major_axis,&Minor_axis);
a=Major_axis/2;b=Minor_axis/2;
printf("\n a=%d  b=%d",a,b);


getch();
closegraph();
}










