#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(200,100,400,360);
rectangle(200,220,230,150);
rectangle(370,220,400,150);
line(200,360,100,450);
line(400,360,500,450);
line(100,450,500,450);
line(200,100,300,20);
line(400,100,300,20);
line(218,85,380,85);
line(237,70,360,70);
line(256,55,345,55);
line(275,40,325,40);
getch();
closegraph();
}
