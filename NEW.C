#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(j=WIDE_DOT_FILL;j<=WIDE_DOT_FILL;j++)
		{
		 setfillstyle(j,GREEN);
		 fillellipse(315,235,230,230);
		}
	for(i=230;i>=0;i--)
	{
		setcolor(GREEN);
		if(i%2==0)
		{
			setcolor(RED);
		}
		else if(i%3==0)
			setcolor(GREEN);
		else if(i%5==0)
			setcolor(BLUE);
		else if(i%4==0)
			setcolor(YELLOW);
		circle(315,235,i);
		delay(100);
	       //	cleardevice();

	}
	getch();
	closegraph();
}

