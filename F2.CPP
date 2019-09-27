#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(200,100,300,80);
line(200,100,200,340);
rectangle(200,120,300,80);
rectangle(200,140,300,80);
rectangle(150,340,250,360);
rectangle(90,380,310,360);
circle(250,110,5);
getch();
closegraph();
}