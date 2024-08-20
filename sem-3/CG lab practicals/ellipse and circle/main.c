#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
  void ellipse(float xc,float yc,float Major_axis,float Minor_axis);
 // void BresenhamCircle(int xc,int yc,int r);
  //void    EightWaySymmetricPlot(int xc,int yc,int x,int y);
    int  main(void)  
   {  
    /* request auto detection */  
    int xc,yc,r,gdriver = DETECT, gmode, errorcode;  
    /* initialize graphics and local variables */  
     initgraph(&gdriver, &gmode, "C:\\TC\\BGI");  
  
     /* read result of initialization */  
     errorcode = graphresult();  
      if (errorcode != grOk)  /* an error occurred */  
     {  
        printf("Graphics error: %s\n", grapherrormsg(errorcode));  
        printf("Press any key to halt:");  
        getch();  
        exit(1); /* terminate with an error code */  
     }  
       printf("Enter the values of xc and yc :");  
       scanf("%d%d",&xc,&yc);  
       printf("Enter the value of radius  :");  
       scanf("%d",&r); 
       printf("\nEnter Value of Major axis and Minor axis ");
       scanf("%f %f",&Major_axis,&Minor_axis);
      // BresenhamCircle(xc,yc,r);  
       ellipse(xc,yc,Major_axis,Minor_axis);
  
     getch();  
     closegraph();  
     return 0;  
    }  
   /* void    EightWaySymmetricPlot(int xc,int yc,int x,int y)  
   {  
    putpixel(x+xc,y+yc,RED);  
    putpixel(x+xc,-y+yc,YELLOW);  
    putpixel(-x+xc,-y+yc,GREEN);  
    putpixel(-x+xc,y+yc,YELLOW);  
    putpixel(y+xc,x+yc,12);  
    putpixel(y+xc,-x+yc,14);  
    putpixel(-y+xc,-x+yc,15);  
    putpixel(-y+xc,x+yc,6);  
   }  */
  
  /*  void BresenhamCircle(int xc,int yc,int r)  
   {  
    int x=0,y=r,d=3-(2*r);  
    EightWaySymmetricPlot(xc,yc,x,y);  
  
    while(x<=y)  
     {  
      if(d<=0)  
             {  
        d=d+(4*x)+6;  
      }  
     else  
      {  
        d=d+(4*x)-(4*y)+10;  
        y=y-1;  
      }  
       x=x+1;  
       EightWaySymmetricPlot(xc,yc,x,y);  
      }  
    }  */
    void ellipse(float xc,float yc,float Major_axis,float Minor_axis)
    {
float p,xprev,yprev,a,b,x,y;
a=Major_axis/2;
// xc= 420; yc=220;
////printf("\nEnter Value of Major axis and Minor axis ");
//scanf("%f %f",&Major_axis,&Minor_axis);
b=Minor_axis/2;
printf("\n a=%f  b=%f",a,b);
x=0;
y=b;
//region 1
//printf("\n\nInitial points of region 1\n   (%f,%f)",x,y);
p=(b*b)+((a*a)/4)-(a*a*b);
//printf("\n Po1= %f",p);
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
//printf("\n\nInitial points of region 2\n   (%f,%f)",x,y);
p=(x+0.5)*(x+0.5)*(b*b)+(y-1)*(y-1)*(a*a)-(a*a*b*b);
//printf("\n Po2= %f",p);

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
}