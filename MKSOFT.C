#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"c:\\turboc3\\BGI");
    ellipse(100,150,0,360,50,50);
    for(i=XHATCH_FILL;i<=XHATCH_FILL;i++)
    {
	setfillstyle(i,RED);
	fillellipse(100,150,50,50);
	getch();
	cleardevice();
    }
    getch();
    closegraph();
}
