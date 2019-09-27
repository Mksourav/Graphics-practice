#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{

	clrscr();
	int gd=DETECT,gm,i,j,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	//while((!kbhit))
	//{
       //	x=getmaxx();
	//y=getmaxy();

	//rectangle(0,0,632,472);
	//rectangle(0,0,0,0);
       /*	for(i=1;i<=i-1;i=i+20)
	{
		for(j=1;j<=y-1;j=j+20)
			putpixel(i,j,6);
	}
	for(i=1;i<=x-1;i=i+40)
	{
		for(j=1;j<=y-1;j=j+40)
			putpixel(i,j,255);
	}
	for(i=1;i<=x-1;i=i+50)
	{
		for(j=1;j<=y-1;j=j+60)
			putpixel(i,j,2);
	}
	for(i=1;i<=x-1;i=i+60)
	{
		for(j=1;j<=y-1;j=j+80)
			putpixel(i,j,6);
	}*/

	for(x=0;x<=630;x=x+10)
	{
		for(y=0;y<=470;y=y+12)
		{
			putpixel(x,y,6);
		}

	}
	for(x=0;x<=630;x=x+30)
	{
		for(y=0;y<=470;y=y+32)
		{
			putpixel(x,y,4);
		}

	}
	for(x=0;x<=630;x=x+50)
	{
		for(y=0;y<=470;y=y+52)
		{
			putpixel(x,y,YELLOW);
		}

	}
	for(x=0;x<=630;x=x+20)
	{
		for(y=0;y<=470;y=y+20)
		{
			putpixel(x,y,GREEN);
		}

	}



	line(172,80,0,60);
	line(172,170,300,360);
	for(i=INTERLEAVE_FILL;i<=INTERLEAVE_FILL;i++)
	{
	setfillstyle(i,255);
	bar(180,75,184,350);
	setfillstyle(i,4);
	setcolor(RED);
	fillellipse(182,70,5,5);
	}
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
	setfillstyle(i,6);
	bar(190,80,350,110);
	setfillstyle(i,255);
	bar(190,110,350,140);
	setfillstyle(i,2);
	bar(190,140,350,170);
	setfillstyle(i,6);
	bar(130,350,230,380);
	setfillstyle(i,255);
	bar(110,380,250,400);
	setfillstyle(i,2);
	bar(90,400,270,410);
	}
	setcolor(BLUE);
	ellipse(270,125,0,360,15,15);



	line(270,125,270,110);
	line(270,125,266,112);
	line(270,125,262,114);
	line(270,125,260,116);
	line(270,125,258,118);
	line(270,125,257,121);

	line(270,125,255,125);
	line(270,125,255,129);
	line(270,125,256,132);
	line(270,125,259,135);
	line(270,125,262,137);
	line(270,125,266,139);

	line(270,125,270,140);
	line(270,125,274,139);
	line(270,125,276,137);
	line(270,125,279,135);
	line(270,125,282,132);
	line(270,125,284,129);

	line(270,125,285,125);
	line(270,125,275,112);
	line(270,125,278,114);
	line(270,125,280,116);
	line(270,125,282,118);
	line(270,125,283,121);


	getch();
	closegraph();

}
