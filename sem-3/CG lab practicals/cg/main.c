#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void main()
{
    int gd,gm ;
    float x,y,x1,x2,y1,y2,i;
    float dx,dy,steps,xinc,yinc;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("\nENTER CORIDUNATED OF POINT 1 ");
    scanf("%f %f",&x1,&y1);
    printf("\nENTER CORIDUNATED OF POINT 2 ");
    scanf("%f %f",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(dy>=dx){
        steps=abs(dx);
    }
    else{
        steps=abs(dy);
    }
    x=x1;
    y=y1;
    xinc=dx/steps;
    yinc=dy/steps;
    putpixel(x,y,10);
    
    for(i=0;i<steps;i++ ){
    putpixel(x,y,12);
    x=x+xinc;
    y=y+yinc;
    }
    getch();
    closegraph();
}



