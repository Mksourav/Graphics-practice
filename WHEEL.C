#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,j,k,m;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(!kbhit())
	{
		for(i=0,j=90;i<=360,j<=360;i+=45,j+=45)
		{
			sector(315,235,i,j,200,150);cleardevice();
			delay(25);
		}
	}

	getch();
	closegraph();
}