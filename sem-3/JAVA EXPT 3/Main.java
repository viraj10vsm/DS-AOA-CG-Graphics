/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class Main{
 int age, id;
 String name;
 Main(int i,String n)
 {
 id=i;
 name=n;
 }
 Main(int i, String n,int a)
 {
 id=i;
 name=n;
 age= a;
 }
 void display()
 {
 System.out.println(id+" "+name+" "+age);
 }
 public static void main(String arg[]){
 Main s1 = new Main(65,"VIRAJ");
 Main s2 = new Main(58,"AADITYA",19);
 s1.display();
 s2.display();
 }}
 