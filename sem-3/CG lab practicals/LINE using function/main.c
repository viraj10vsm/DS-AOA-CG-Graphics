
#include <stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void line(int a,int b,int c,int d);
void main()
{  
int X1,Y1,X2,Y2;//gd,gm;
//int x,y;
//detectgraph(&gd,&gm);
//initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("         Implementation of Bresenhams line drawing Algorithm    \n\n");
printf("Enter the starting  coordinates\n");
scanf("%d%d",&X1,&Y1);
printf("Enter the ending coordinates\n");
scanf("%d%d",&X2,&Y2);

line(X1,Y1,X2,Y2);
getch();
  
}
void line(int x1,int y1,int x2,int y2){
    int d;
    d=x1+y1+x2+y2;
    printf("%d",d);
}
/*void line(int x1, int y1, int x2, int y2){
    int p,x,y,dx,dy,gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
dx=x2-x1;
dy=y2-y1;
p=2*dy-dx;
x=x1;
y=y1;
while(x<=x2)
{
    putpixel(x,y,15);
    x++;
    if(p<0){
        p=p+2*dy;
        
    }
    else
    {
        p=p+2*dy-2*dx;
        y++;
        delay(100);
    }
}
    getch();
    closegraph();
}
*/

















