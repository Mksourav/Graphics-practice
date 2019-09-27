#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
       //	setbkcolor(BLUE);
       //	for(j=CLOSE_DOT_FILL;j<=CLOSE_DOT_FILL;j++)
	//{
	 //	setfillstyle(j,BLUE);
	   //	bar(0,0,0,0);
       //	}

	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
	setfillstyle(i,8);
	setcolor(8);
	fillellipse(340,180,80,50);
	setfillstyle(i,8);
	setcolor(8);
	fillellipse(340,220,80,50);
	setfillstyle(i,2);
	setcolor(7);
	fillellipse(340,200,120,50);
	setfillstyle(i,2);
	setcolor(2);
	fillellipse(332,218,120,30);
	setfillstyle(i,76);
	setcolor(76);
	fillellipse(360,202,120,30);
	setfillstyle(i,RED);
	setcolor(RED);
	fillellipse(170,195,30,15);
	setfillstyle(i,RED);
	setcolor(RED);
	fillellipse(170,205,30,15);
	setfillstyle(i,YELLOW);
	setcolor(YELLOW);
	fillellipse(270,200,120,80);
	setfillstyle(i,RED);
	setcolor(RED);
	fillellipse(180,188,10,10);
	setfillstyle(i,0);
	setcolor(0);
	fillellipse(180,188,5,5);
	}
       //	arc(250,300,180,360,100);
       setcolor(RED);
       arc(200,141,300,60,10);
       setcolor(RED);
       arc(200,158,300,60,10);
       setcolor(RED);
       arc(200,175,300,60,10);
       setcolor(RED);
       arc(200,192,300,60,10);
       setcolor(RED);
       arc(200,209,300,60,10);
       setcolor(RED);
       arc(200,226,300,60,10);
       setcolor(RED);
       arc(200,243,300,60,10);
       setcolor(RED);
       arc(200,260,300,60,10);
       cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
       cout<<"                          MY LOVELY FISH";

	getch();
	closegraph();
}
