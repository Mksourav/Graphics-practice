#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,j,k,a,b,c,d,e,f,g,h,m,n;
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
	for(a=80;a>=0;a--)
	{
	fillellipse(a,180,80,50);
	}
	setfillstyle(i,8);
	setcolor(8);
	for(b=340;b>=0;b--)
	{
	fillellipse(b,220,80,50);
	}
	setfillstyle(i,2);
	setcolor(7);
	for(c=340;c>=0;c--)
	{
	fillellipse(c,200,120,50);
	}
	setfillstyle(i,2);
	setcolor(2);
	for(d=332;d>=0;d--)
	{
	fillellipse(d,218,120,30);
	}
	setfillstyle(i,76);
	setcolor(76);
	for(e=360;e>=0;e--)
	{
	fillellipse(e,202,120,30);
	}
	setfillstyle(i,RED);
	setcolor(RED);
	for(f=170;f>=0;f--)
	{
	fillellipse(f,195,30,15);
	}
	setfillstyle(i,RED);
	setcolor(RED);
	for(g=170;g>=0;g--)
	{
	fillellipse(g,205,30,15);
	}
	setfillstyle(i,YELLOW);
	setcolor(YELLOW);
	for(h=270;h>=0;h--)
	{
	fillellipse(h,200,120,80);
	}
	setfillstyle(i,RED);
	setcolor(RED);
	for(m=180;m>=0;m--)
	{
	fillellipse(m,188,10,10);
	}
	setfillstyle(i,0);
	setcolor(0);
	for(n=180;n>=0;n--)
	{
	fillellipse(n,188,5,5);
	}

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
	cleardevice();
	getch();
	closegraph();
}
