#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,sang,eang,i,j,k;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	//i=0;
	while(!kbhit())
	{
		/*for(j=1;j<=1;j++)
			ellipse(315,150,0,360,105,80);*/
		for(j=SOLID_FILL;j<=SOLID_FILL;j++)
		{
			setfillstyle(j,GREEN);
			fillellipse(315,235,20,20);
		}
	for(sang=0,eang=45;sang<=310,eang<=360;sang+=60,eang+=60)
	{
		for(k=SOLID_FILL;k<=SOLID_FILL;k++)
		{
			setfillstyle(k,YELLOW);
			sector(315,235,sang,eang,250,200);
			delay(25);cleardevice();
		}
	}
	//i++;
	}
	getch();
	closegraph();
}

