#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y,i;
	struct arccoordstype arcinfo;
	char sstr[80], estr[80];
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	 for(x=1;x<=629;x=x+10)
	 {
		for(y=1;y<=469;y=y+10)
			putpixel(x,y,4);
	 }
	 for(x=1;x<=629;x=x+20)
	 {
		for(y=1;y<=469;y=y+10)
			putpixel(x,y,1);
	 }
	 for(x=1;x<=629;x=x+30)
	 {
		for(y=1;y<=469;y=y+10)
			putpixel(x,y,YELLOW);
	 }
	 for(x=1;x<=629;x=x+40)
	 {
		for(y=1;y<=469;y=y+10)
			putpixel(x,y,GREEN);
	 }
	  for(x=1;x<=629;x=x+50)
	 {
		for(y=1;y<=469;y=y+10)
			putpixel(x,y,6);
	 }
	arc(315,500,60,150,400);
	/*getarccoords(&arcinfo);
	sprintf(sstr, "(%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "(%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 arc(315,500,74,119,390);
	 arc(315,500,74,119,380);arc(315,500,75,119,370);arc(315,500,75,119,360);
	 arc(315,500,75,119,350);arc(315,500,76,119,340);arc(315,500,76,120,330);
	 arc(315,500,77,120,320);arc(315,500,78,121,310);arc(315,500,79,122,300);
	 arc(315,500,81,123,290);arc(315,500,82,125,280);arc(315,500,84,127,270);
	 arc(315,500,87,129,260);arc(315,500,90,126,250);arc(315,500,93,123,240);
	 arc(150,0,250,353,300);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 line(447,105,447,37);
	 line(447,105,515,154);
	 //line(0,260,20,265);
	 line(47,282,77,282);
	 line(0,253,15,262);
	 line(15,262,77,282);
	 ellipse(57,230,0,360,10,10);
	 ellipse(57,230,0,360,12,12);
	 for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	 {
		setfillstyle(i,8);
		fillellipse(57,230,10,10);
	 }
	 setcolor(WHITE);
	 ellipse(47,230,300,50,10,10);
	 arc(0,253,342,41,150);
	 arc(0,253,342,41,155);
	 arc(290,252,90,150,201);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 arc(290,150,90,161,100);
	 arc(260,160,230,300,181);
	 arc(320,150,234,276,175);
	getch();
	closegraph();
}
