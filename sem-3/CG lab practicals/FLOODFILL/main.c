#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void floodFill(int x,int y, int oldColor, int newColor)
{
if(getpixel(x,y)==oldColor)
{
putpixel(x,y,newColor);
delay(10);
floodFill(x + 1,y,oldColor,newColor);
floodFill(x - 1,y,oldColor,newColor);
floodFill(x,y + 1,oldColor,newColor);
floodFill(x,y - 1,oldColor,newColor);
}
}

//getpixel(x,y) gives the color of specified pixel

int main()
{
int gm, gd, r;
int x, y;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("Enterx an d y positions for circle\n");
scanf("%d%d",&x,&y);
printf("Enter radius of circle\n");
scanf("%d",&r);
circle(x,y,r);
floodFill(x, y,0,7);

closegraph();
return 0;
}
