#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,j,k;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	//circle moving from left-up to right-down diagonally...
	if(i%4==0)
	{
	for(i=60,j=70;i<=579,j<=400;i++,j++)
	{
		//if(i%4==0)
		//{
		for(k=WIDE_DOT_FILL;k<=WIDE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(i,j,0,360,60,60);
		fillellipse(i,j,60,60);
		}
		//}
		//cleardevice();
	}
	}
	getch();
	closegraph();
}
