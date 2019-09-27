#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,j,k;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	//circle moving from left-up to right-down diagonally...
	for(i=60;i<=579;i++)
	{
	  for(j=70;j<=400;j++)
	  {
		for(k=CLOSE_DOT_FILL;k<=CLOSE_DOT_FILL;k++)
		{
		setfillstyle(k,GREEN);
		setcolor(RED);
		ellipse(i,j,0,360,60,60);
		fillellipse(i,j,60,60);
		}
	  }
	}
	if(getch()=='e')
		exit(1);
	getch();
	closegraph();
}
