#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill (int x, int y, int f_color, int b_color )
{
if(getpixel(x,y)!=b_color&&getpixel(x,y)!=f_color)
{
putpixel(x,y,f_color);
delay(10);
boundaryfill(x + 1,y,f_color,b_color);
boundaryfill(x,y + 1,f_color,b_color);
boundaryfill(x - 1,y,f_color,b_color);
boundaryfill(x,y - 1,f_color,b_color);

/*boundaryfill(x-1,y-1,f_color,b_color);
boundaryfill(x+1,y-1,f_color,b_color);
boundaryfill(x-1,y+1,f_color,b_color);
boundaryfill(x+1,y+1,f_color,b_color); */
}
}
// getpixel(x,y) gives the color of specified pixel
int main()
{
int gm,gd,r;
int x,y;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("                   BOUNDARY FILL \n");

printf("Enter x and y positions for circle\n");
scanf("%d %d",&x,&y);
printf("Enter radius of circle\n");
scanf("%d",&r);
circle(x,y,r);
boundaryfill(x,y,3,15);
getch();
closegraph();
return 0;
}



