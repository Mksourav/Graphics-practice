#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	struct arccoordstype arcinfo;
	int x,y,i,j;
	char sstr[80], estr[80];
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	for(x=0;x<=630;x=x+5)
	{
		for(y=0;y<=470;y=y+5)
		{
			putpixel(x,y,6);
		}
		delay(10);
	}
	for(x=0;x<=630;x=x+10)
	{
		for(y=0;y<=470;y=y+10)
		{
			putpixel(x,y,4);
		}
		delay(20);
	}
	for(x=0;x<=630;x=x+15)
	{
		for(y=0;y<=470;y=y+15)
		{
			putpixel(x,y,YELLOW);
		}
		delay(30);
	}
	for(x=0;x<=630;x=x+20)
	{
		for(y=0;y<=470;y=y+20)
		{
			putpixel(x,y,GREEN);
		}
		delay(40);
	}

	line(250,100,250,350);
	line(250,100,255,100);
	line(255,100,255,350);
	line(250,350,255,350);
	line(255,100,265,110);
	line(255,210,265,200);
	line(265,110,265,200);
	line(265,110,400,110);
	line(265,200,400,200);
	line(400,110,400,200);
	line(265,140,400,140);
	line(265,170,400,170);
	for(x=266;x<=399;x++)
	{
		for(y=111;y<=139;y++)
		putpixel(x,y,6);
	}
	for(x=266;x<=399;x++)
	{
		for(y=141;y<=169;y++)
		putpixel(x,y,WHITE);
	}
	for(x=266;x<=399;x++)
	{
		for(y=171;y<=199;y++)
		putpixel(x,y,GREEN);
	}
	setcolor(BLUE);
	//circle(332.5,155,15);
	arc(332.5,155,45,225,15);
	// line(342,145,321,166);delay(500);
	/*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 arc(332.5,155,75,255,15);
		/*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	  //line(335,141,328,170);delay(500);
	  arc(332.5,155,60,240,15);
	 /* getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(339,143,324,168);delay(500);
	 arc(332.5,155,15,195,15);
	/* getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(346,152,317,159);delay(500);
	 arc(332.5,155,30,210,15);
	/* getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 arc(332.5,155,105,285,15);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(344,148,319,163);delay(500);
	 //line(328,141,335,170);delay(500);
	 arc(332.5,155,120,300,15);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(324,143,339,168);delay(500);
	 arc(332.5,155,135,315,15);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(321,145,342,166);delay(500);
	 arc(332.5,155,150,330,15);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(319,148,344,163);delay(500);
	 arc(332.5,155,165,345,15);
	 /*getarccoords(&arcinfo);
	sprintf(sstr, "*- (%d, %d)", arcinfo.xstart, arcinfo.ystart);
	sprintf(estr, "*- (%d, %d)", arcinfo.xend, arcinfo.yend);
	 outtextxy(arcinfo.xstart,arcinfo.ystart, sstr);
	 outtextxy(arcinfo.xend,arcinfo.yend, estr);*/
	 //line(317,152,346,159);delay(500);
	line(347.5,155,317.5,155);
	line(332.5,141,332.5,169);
	setcolor(WHITE);
	line(200,350,300,350);
	line(200,375,200,350);
	line(300,350,300,375);
	line(200,375,300,375);
	line(175,375,325,375);
	line(175,375,175,400);
	line(325,375,325,400);
	line(175,400,325,400);
	line(150,400,350,400);
	line(150,400,150,425);
	line(350,400,350,425);
	line(150,425,350,425);
	for(x=201;x<=299;x++)
	{
		for(y=351;y<=374;y++)
			putpixel(x,y,4);
	}
	for(x=176;x<=324;x++)
	{
		for(y=376;y<=399;y++)
			putpixel(x,y,WHITE);
	}
	for(x=151;x<=349;x++)
	{
		for(y=401;y<=424;y++)
			putpixel(x,y,2);
	}
	for(x=251;x<=254;x++)
	{
		for(y=101;y<=349;y++)
			putpixel(x,y,YELLOW);
	}
	ellipse(252.5,95,0,360,5,5);
	for(i=INTERLEAVE_FILL;i<=INTERLEAVE_FILL;i++)
	{
		setfillstyle(i,YELLOW);
		fillellipse(252.5,95,5,5);
	}
	arc(280,162.5,115,245,68.5);
	arc(230,285,270,70,65.5);
	setcolor(1);
	circle(332.5,155,15);
	line(342,145,321,166);delay(500);
	line(335,141,328,170);delay(500);
	line(339,143,324,168);delay(500);
	line(346,152,317,159);delay(500);
	line(344,148,319,163);delay(500);
	line(328,141,335,170);delay(500);
	line(324,143,339,168);delay(500);
	line(321,145,342,166);delay(500);
	line(319,148,344,163);delay(500);
	line(317,152,346,159);delay(500);
	j=0;
	for(i=0;i<=50;i++)
	{
		if(i%2==0)
		{
			circle(50,50,i);
			circle(580,420,i);
			delay(50);
		}
		if(i%2==0)
		{
			setcolor(j);
			j++;
		}
		else if(i%3==0)
		{
			setcolor(j+1);
			j=j+2;
		}
		else if(i%5==0)
		{
			setcolor(j+2);
			j=j+3;
		}
		circle(50,50,i);
		circle(580,420,i);
	}
	for(i=0;i<=50;i++)
	{
		if(i%2==0)
		{
			circle(50,235,i);
			circle(580,235,i);
			delay(50);
		}
		if(i%4==0)
		{
			setcolor(j);
			j++;
		}
		else if(i%6==0)
		{
			setcolor(j+1);
			j=j+2;
		}
		else if(i%5==0)
		{
			setcolor(j+2);
			j=j+3;
		}
		circle(50,235,i);
		circle(580,235,i);
	}
	for(i=0;i<=50;i++)
	{
		if(i%2==0)
		{
			circle(50,420,i);
			circle(580,50,i);
			delay(50);
		}
		if(i%2==0)
		{
			setcolor(j);
			j++;
		}
		else if(i%3==0)
		{
			setcolor(j+3);
			j=j+2;
		}
		else if(i%5==0)
		{
			setcolor(j+5);
			j=j+3;
		}
		circle(50,420,i);
		circle(580,50,i);
	}
	getch();
	closegraph();
}
