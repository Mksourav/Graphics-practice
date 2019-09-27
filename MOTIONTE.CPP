#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,j,k;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	//for(a=250;a<=250;a++)
	//{
	  //	for(b=250;b<=400;b++)
	    //	putpixel(a,b,RED);
	      //	delay(10);
	//}

	//circle moving from left-up to right-up...
	for(i=60;i<=579;i++)
	{
		for(k=CLOSE_DOT_FILL;k<=CLOSE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(i,70,0,360,60,60);
		fillellipse(i,70,60,60);
		}
		//delay(15);
	       //	cleardevice();
	}

	//circle moving from right-up to right-down...
	for(j=70;j<=400;j++)
	{
		for(k=CLOSE_DOT_FILL;k<=CLOSE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(579,j,0,360,60,60);
		fillellipse(579,j,60,60);
		}
		//delay(15);
		//cleardevice();
	}

	//circle moving from right-down to left-down...
	for(i=579;i>=60;i--)
	{
		for(k=CLOSE_DOT_FILL;k<=CLOSE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(i,400,0,360,60,60);
		fillellipse(i,400,60,60);
		}
		//delay(15);
	       //	cleardevice();
	}

	//circle moving from left-down to left-up...
	for(j=400;j>=70;j--)
	{
		for(k=CLOSE_DOT_FILL;k<=CLOSE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(60,j,0,360,60,60);
		fillellipse(60,j,60,60);
		//delay(15);
	       //	cleardevice();
		}
	}

	//circle moving from left-up to right-down diagonally...

	for(i=60,j=70;i<=579,j<=400;i++,j++)
	{
		if(i%4==0)
		{
		for(k=WIDE_DOT_FILL;k<=WIDE_DOT_FILL;k++)
		{
		setfillstyle(k,BLUE);
		setcolor(RED);
		ellipse(i,j,0,360,60,60);
		fillellipse(i,j,60,60);
		}
		}
		//cleardevice();
	}
	getch();
	closegraph();
}
