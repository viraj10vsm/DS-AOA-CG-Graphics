//call by value
#include <stdio.h>
#include<conio.h>

int main ()
{
  void swap (int , int );
  int a = 10, b = 20;
  printf ("\nbefore calling swap a=%d \t b=%d", a, b);
  swap (a, b);
  printf ("\nafter calling swap a=%d \t b=%d", a, b);
  getch ();
}

void swap (int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  printf ("\nin swap x=%d \t y=%d", x, y);
}

