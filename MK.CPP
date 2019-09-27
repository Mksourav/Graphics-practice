#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"c:\\turboc3\\BGI");
    for(i=SOLID_FILL;i<=SOLID_FILL;i++)
    {
		setfillstyle(i,GREEN);
		fillellipse(130,200,50,50);
		fillellipse(470,200,50,50);
		fillellipse(300,250,200,150);
		arc(200,180,0,180,10);
		arc(400,180,0,180,10);
		ellipse(300,250,0,360,20,30);
		arc(300,250,210,330,100);
		arc(100,380,270,360,100);
		arc(500,380,180,270,100);
		getch();
		cleardevice();

	}

    getch();
    closegraph();
}
