#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	bar(150,200,400,300);
	for(i=LINE_FILL;i<=USER_FILL;i++)
	{
	setfillstyle(i,RED);
	bar(150,200,400,300);
	getch();
	cleardevice();
	}
	getch();
	closegraph();
}

