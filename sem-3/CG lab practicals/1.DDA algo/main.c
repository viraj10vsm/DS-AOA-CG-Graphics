
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{
int x1,y1,x2,y2,dx,dy,i,steps,gd,gm;
int x,y,xinc,yinc;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
  setbkcolor(BLUE);

//clrscr();
printf("\n\t\tEXPT 1:LINE DRAWING BY DDA ALGORITHM PROGRAM                    \n");
printf("\nEnter the starting coordinates");
scanf("%d%d",&x1,&y1);
printf("\nEnter the ending coordinates");
scanf("%d%d",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy){
steps=abs(dx);
}
else{
steps=abs(dy);
}
xinc=dx/steps;
yinc=dy/steps;
x=x1;
y=y1;
putpixel(x,y,10);

for(i=0;i<steps;i++)
{
putpixel(x,y,10);
x=x+xinc;
y=y+yinc;
delay(10);
}
getch();
closegraph();
}











