#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
arc(250,200,00,180,70);
arc(250,200,180,360,70);
arc(180,210,300,80,40);
putpixel(200,200,1100);
line(320,200,370,230);
line(320,200,370,170);
line(370,230,370,170);
getch();
closegraph();
}