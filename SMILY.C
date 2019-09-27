#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	struct arccoordstype arcinfo;
	int x,y,i;
	char sstr[80], estr[80];
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	rectangle(0,0,630,470);
	for(x=1;x<=629;x=x+20)
	{
		for(y=1;y<=469;y=y+20)
			putpixel(x,y,YELLOW);
	}
	for(x=1;x<=629;x=x+30)
	{
		for(y=1;y<=469;y=y+30)
			putpixel(x,y,GREEN);
	}
	for(x=1;x<=629;x=x+40)
	{
		for(y=1;y<=469;y=y+40)
			putpixel(x,y,4);
	}
	arc(320,-120,240,300,200);
	/*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,
	     arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,
	     arcinfo.yend, estr);*/
	 line(220,54,120,0);
	 line(220,54,120,5);
	 line(220,54,120,10);
	 line(220,54,120,15);
	 line(220,54,120,20);
	 line(220,54,120,25);
	 line(220,54,120,30);
	 line(220,54,120,35);
	 line(220,54,120,40);
	 line(220,54,120,45);
	 line(220,54,120,55);
	 line(220,54,120,50);
	 line(220,54,120,60);
	 line(220,54,120,65);
	 line(220,54,120,70);
	 line(220,54,120,75);
	 line(220,54,120,80);
	 line(220,54,120,85);
	 line(220,54,120,90);
	 line(220,54,120,95);
	 line(420,54,520,55);
	 line(420,54,520,60);
	 line(420,54,520,65);
	 line(420,54,520,70);
	 line(420,54,520,75);
	 line(420,54,520,80);
	 line(420,54,520,85);
	 line(420,54,520,90);
	 line(420,54,520,95);
	 line(420,54,520,50);
	 line(420,54,520,45);
	 line(420,54,520,40);
	 line(420,54,520,35);
	 line(420,54,520,30);
	 line(420,54,520,25);
	 line(420,54,520,20);
	 line(420,54,520,15);
	 line(420,54,520,10);
	 line(420,54,520,5);
	 line(420,54,520,0);
	 line(420,54,120,0);
	 line(420,54,120,5);line(420,54,120,10);line(420,54,120,15);
	 line(420,54,120,20);line(420,54,120,25);line(420,54,120,30);
	 line(420,54,120,35);line(420,54,120,40);line(420,54,120,45);
	 line(420,54,120,50);line(420,54,120,55);line(420,54,120,60);
	 line(420,54,120,65);line(420,54,120,70);line(420,54,120,80);
	 line(420,54,120,85);line(420,54,120,90);line(420,54,120,95);
	 line(420,54,120,75);
	 line(220,54,520,0);
	 line(220,54,520,5);
	 line(220,54,520,10);
	 line(220,54,520,15);
	 line(220,54,520,20);
	 line(220,54,520,25);
	 line(220,54,520,30);
	 line(220,54,520,35);
	 line(220,54,520,40);
	 line(220,54,520,45);
	 line(220,54,520,50);
	 line(220,54,520,55);line(220,54,520,60);line(220,54,520,65);
	 line(220,54,520,70);line(220,54,520,75);line(220,54,520,80);
	 line(220,54,520,85);line(220,54,520,90);line(220,54,520,95);
	line(220,54,152,104);
	line(477,102,420,54);
	arc(315,235,141,270,210);
	arc(315,235,270,39,210);
	arc(0,235,300,60,50);
	/*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	outtextxy(arcinfo.xstart,
	     arcinfo.ystart, sstr);
	outtextxy(arcinfo.xend,
	     arcinfo.yend, estr);*/
	line(25,192,105,235.5);
	line(25,279,105,235.5);
	arc(630,235,120,240,50);
	line(604,192,526,235.5);
	line(604,279,526,235.5);
	ellipse(220,154,0,360,50,25);
	arc(220,165,35,145,60);
	ellipse(410,154,0,360,50,25);
	arc(410,165,35,145,60);
	arc(315,279,45,135,30);
		/*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	outtextxy(arcinfo.xstart,
	     arcinfo.ystart, sstr);
	outtextxy(arcinfo.xend,
	     arcinfo.yend, estr);*/
	line(315,154,295,258);
	line(315,154,335,258);
	/*circle(220,154,25);
	circle(410,154,25);*/
	ellipse(220,154,0,360,25,25);
	for(i=CLOSE_DOT_FILL;i<=CLOSE_DOT_FILL;i++)
	{
		setfillstyle(i,getmaxcolor());
		fillellipse(220,154,25,25);
	}
	ellipse(410,154,0,360,25,25);
	for(i=CLOSE_DOT_FILL;i<=CLOSE_DOT_FILL;i++)
	{
		setfillstyle(i,getmaxcolor());
		fillellipse(410,154,25,25);
	}
	arc(315,279,210,330,100);
	arc(315,284,210,330,100);
	arc(213,335,330,45,15);
	arc(417,335,140,230,15);
	getch();
	closegraph();
}
