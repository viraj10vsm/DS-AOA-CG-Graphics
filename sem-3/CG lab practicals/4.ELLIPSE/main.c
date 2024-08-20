/*NOTE: remove all decision parameters printing statements at the start of while loop before entering largers axis length */

//               MID-POINT ELLIPSE DRAWING PROGRAM
# include <stdio.h>
# include <conio.h>
# include <graphics.h>
void main()
{
float Major_axis,Minor_axis,a,b,x,y,xc,yc,xprev,yprev;
float p;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
clrscr();
printf("\n\t\t\tMID-POINT ELLIPSE DRAWING PROGRAM                    ");
printf("\n\nEnter the co-ordinates of center : ");   
scanf("%f%f",&xc,&yc);
// xc= 420; yc=220;
printf("\nEnter Value of Major axis and Minor axis ");
scanf("%f %f",&Major_axis,&Minor_axis);
a=Major_axis/2;
b=Minor_axis/2;
printf("\n a=%f  b=%f",a,b);
x=0;
y=b;
//region 1
printf("\n\nInitial points of region 1\n   (%f,%f)",x,y);
p=(b*b)+((a*a)/4)-(a*a*b);
printf("\n Po1= %f",p);
while(2*b*b*x < 2*a*a*y)
{
  //  printf("\n p1k=%f",p);    // comment out this for larger Axis length
    putpixel(xc+x,yc+y,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+x,yc-y,RED);
    
    xprev=x; yprev=y;
    x=x+1;
    if(p>=0){
        y=y-1;
        }
    p=p+b*b+(2*(xprev+1)*b*b)+(a*a*((y*y)-(yprev*yprev)))-(a*a)*(y-yprev);
}
//region 2
printf("\n\nInitial points of region 2\n   (%f,%f)",x,y);
p=(x+0.5)*(x+0.5)*(b*b)+(y-1)*(y-1)*(a*a)-(a*a*b*b);
printf("\n Po2= %f",p);

while(y>=0){
   // printf("\n p2k=%f",p); // comment out this for larger Axis length
    putpixel(xc+x,yc+y,BLACK);
    putpixel(xc-x,yc+y,BLACK);
    putpixel(xc-x,yc-y,BLACK);
    putpixel(xc+x,yc-y,BLACK);
    xprev=x; yprev=y;
    y=y-1;
    if(p<0){
        x=x+1;
    }
    p=p+(a*a)-2*(yprev-1)*(a*a)+(b*b)*((x*x)-(xprev*xprev))+(b*b)*(x-xprev);
    
}
getch();
closegraph();
}






















