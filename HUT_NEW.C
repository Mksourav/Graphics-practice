#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,i;
	int poly[10];
	int poly1[8];
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	for(x=70;x<=630;x=x+10)
	{
		for(y=1;y<=470;y=y+10)
		putpixel(x,y,YELLOW);
		delay(50);
	}
	for(x=70;x<=630;x=x+20)
	{
		for(y=1;y<=470;y=y+10)
		putpixel(x,y,5);
		delay(50);
	}
	for(x=70;x<=630;x=x+10)
	{
		for(y=1;y<=470;y=y+20)
		putpixel(x,y,9);
		delay(50);
	}
	for(x=70;x<=630;x=x+30)
	{
		for(y=1;y<=470;y=y+20)
		putpixel(x,y,10);
		delay(50);
	}
	for(x=70;x<=630;x=x+20)
	{
		for(y=1;y<=470;y=y+30)
		putpixel(x,y,13);
		delay(50);
	}
	line(100,200,175,75);
	line(100,200,105,205);
	line(105,205,175,75);
	line(250,200,175,75);
	line(245,205,250,200);
	line(245,205,175,75);
	line(175,75,525,75);
	line(450,200,525,75);
	line(455,205,450,200);
	line(455,205,525,75);
	line(600,200,525,75);
	line(595,205,600,200);
	line(595,205,525,75);
	line(250,200,450,200);
	line(245,205,455,205);
	line(105,205,595,205);
	rectangle(105,205,245,400);
	for(i=LINE_FILL;i<=LINE_FILL;i++)
	{
		setfillstyle(i,1);
		bar(106,206,244,399);
	}
	for(i=HATCH_FILL;i<=HATCH_FILL;i++)
		{
		setfillstyle(i,4);
		bar(115,225,235,300);
	}
	rectangle(120,230,230,295);
	line(175,230,175,295);
	for(i=SLASH_FILL;i<=SLASH_FILL;i++)
	{
		setfillstyle(i,6);
		bar(125,235,170,290);
	}
	for(i=BKSLASH_FILL;i<=BKSLASH_FILL;i++)
	{
		setfillstyle(i,6);
		bar(180,235,225,290);
	}
	rectangle(455,205,595,400);
	for(i=LINE_FILL;i<=LINE_FILL;i++)
	{
		setfillstyle(i,1);
		bar(456,206,594,399);
	}
	for(i=HATCH_FILL;i<=HATCH_FILL;i++)
	{
		setfillstyle(i,4);
		bar(465,225,585,300);
	}
	rectangle(470,230,580,295);
	line(525,230,525,295);
	for(i=SLASH_FILL;i<=SLASH_FILL;i++)
	{
		setfillstyle(i,6);
		bar(475,235,520,290);
	}
	for(i=BKSLASH_FILL;i<=BKSLASH_FILL;i++)
	{
		setfillstyle(i,6);
		bar(530,235,575,290);
	}
	rectangle(245,205,455,400);
	for(i=WIDE_DOT_FILL;i<=WIDE_DOT_FILL;i++)
	{
		setfillstyle(i,CYAN);
		bar(246,206,454,400);
	}
	line(245,400,455,400);
	rectangle(299,299,401,400);
	for(i=XHATCH_FILL;i<=XHATCH_FILL;i++)
	{
		setfillstyle(i,GREEN);
		bar(300,300,400,400);
	}
	rectangle(300,400,400,425);
	for(i=INTERLEAVE_FILL;i<=INTERLEAVE_FILL;i++)
	{
		setfillstyle(i,3);
		bar(301,401,399,424);
	}
	rectangle(275,425,425,450);
	for(i=INTERLEAVE_FILL;i<=INTERLEAVE_FILL;i++)
	{
		setfillstyle(i,3);
		bar(276,426,424,449);
	}
	//line(137.5,137.5,150.5,115.5);
	line(137.5,137.5,137.5,67.5);
	line(150.5,115.5,150.5,87.5);
	line(137.5,67.5,150.5,87.5);
	line(562.5,137.5,562.5,67.5);
	line(549.5,115.5,549.5,87.5);
	line(562.5,67.5,549.5,87.5);
	poly[0]=175;
	poly[1]=75;
	poly[2]=250;
	poly[3]=200;
	poly[4]=450;
	poly[5]=200;
	poly[6]=525;
	poly[7]=75;
	poly[8]=poly[0];
	poly[9]=poly[1];
	drawpoly(4,poly);
	for(i=HATCH_FILL;i<=HATCH_FILL;i++)
	{
		setfillstyle(i,4);
		fillpoly(4,poly);
	}
	poly[0]=137.5;
	poly[1]=137.5;
	poly[2]=137.5;
	poly[3]=67.5;
	poly[4]=150.5;
	poly[5]=87.5;
	poly[6]=150.5;
	poly[7]=115.5;
	poly[8]=poly[0];
	poly[9]=poly[1];
	drawpoly(4,poly);
	for(i=BKSLASH_FILL;i<=BKSLASH_FILL;i++)
	{
		setfillstyle(i,5);
		fillpoly(4,poly);
	}
	poly[0]=549.5;
	poly[1]=87.5;
	poly[2]=549.5;
	poly[3]=115.5;
	poly[4]=562.5;
	poly[5]=137.5;
	poly[6]=562.5;
	poly[7]=67.5;
	poly[8]=poly[0];
	poly[9]=poly[1];
	drawpoly(4,poly);
	for(i=SLASH_FILL;i<=SLASH_FILL;i++)
	{
		setfillstyle(i,5);
		fillpoly(4,poly);
	}
	poly1[0]=175;
	poly1[1]=75;
	poly1[2]=105;
	poly1[3]=205;
	poly1[4]=245;
	poly1[5]=205;
	poly1[6]=poly1[0];
	poly1[8]=poly1[1];
	drawpoly(3,poly1);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
		setfillstyle(i,getmaxcolor());
		fillpoly(3,poly1);
	}
	poly1[0]=525;
	poly1[1]=75;
	poly1[2]=455;
	poly1[3]=205;
	poly1[4]=595;
	poly1[5]=205;
	poly1[6]=poly1[0];
	poly1[8]=poly1[1];
	drawpoly(3,poly1);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
		setfillstyle(i,getmaxcolor());
		fillpoly(3,poly1);
	}
	setcolor(BLACK);
	circle(175,160,30);
	circle(175,160,25);
	line(175,130,175,190);
	line(145,160,205,160);
	circle(525,160,30);
	circle(525,160,25);
	line(525,130,525,190);
	line(495,160,555,160);
	getch();
	closegraph();
}
