# include <stdio.h>
# include <conio.h>
# include <graphics.h>
void main()
{
int xc,yc,r,x,y;
float p;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
clrscr();
printf("\n\t\t\tMID-POINT CIRCLE DRAWING PROGRAM                    ");
printf("\n\n\tEnter the co-ordinates of center : ");
scanf("%d%d",&xc,&yc);
//xc=220;
//yc=220;
printf("\n\n\tEnter the radius: ");
scanf("%d",&r);
//r=100;
x = 0;
y = r;
p=(5/4-r);
for(x=0;x<y;x=x+1)
{
if(p < 0)
{
y=y;
p = p + (2 * x)+1;
}
else
{
y=y-1;
p = p + 2 *(x)-2*(y)+1;
}
putpixel(xc+x,yc-y,BLACK);
putpixel(xc-x,yc-y,BLACK);
putpixel(xc+x,yc+y,BLACK);
putpixel(xc-x,yc+y,BLACK);
putpixel(xc+y,yc-x,BLACK);
putpixel(xc-y,yc-x,BLACK);
putpixel(xc+y,yc+x,BLACK);
putpixel(xc-y,yc+x,BLACK);
}
getch();
closegraph();
}





