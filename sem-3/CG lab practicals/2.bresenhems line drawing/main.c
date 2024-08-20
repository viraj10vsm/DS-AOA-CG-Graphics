/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{  
int x1,y1,x2,y2,dx,dy,p,gd,gm;
int x,y;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("         Implementation of Bresenhams line drawing Algorithm    \n\n");
printf("Enter the starting  coordinates\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending coordinates\n");
scanf("%d%d",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
printf("%d",dx);
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

















