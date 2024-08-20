#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
    int gd,gm;
    float x,y,x1,y1,x2,y2,steps,dx,dy,i,xinc,yinc;
    detectgraph(&gm,&gd);
    initgraph(&gm,&gd,"c:\\TC\\BGI");
    printf("IMPLEMETATION OF DDA LINE DRAWING ALGORITHM");
    printf("\nENTER THE COORDINATES OF POINT 1 : ");
    scanf("%f%f",&x1,&y1);
    printf("\nENTER THE COORDINATES OF POINT 2 : ");
    scanf("%f%f",&x1,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    x=x1;
    y=y1;
    putpixel(x,y,WHITE);
    if(dy>dx){
        steps=dy;
    }
    else{
        steps=dx;
    } 
    xinc=dx/steps;
    yinc=dy/steps;
    for(i=0;i<steps;i++){
    putpixel(x,y,WHITE);   
    x=x+xinc;
    y=y+yinc;
    }
 getch();
 closegraph();
}



