#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i ;
	int pt[10];
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");

	setcolor(RED);
	line(40,30,0,90);
	line(40,30,80,90);
	line(600,30,560,90);
	line(600,30,640,90);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
	setfillstyle(i,9);
	bar(0,90,80,350);
	setfillstyle(i,5);
	bar(560,90,640,350);
	setfillstyle(i,4);

	bar(80,90,560,350);
	line(40,30,600,30);
	setfillstyle(i,99);
	bar(200,150,450,350);
	bar(120,200,180,250);
	bar(470,200,530,250);
	cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	cout<<"                                 MY SWEET HOME";
	}
	setcolor(0);
	line(290,250,350,250);
	line(290,255,350,255);
	line(290,250,290,255);
	line(350,250,350,255);

	pt[0]=40;
	pt[1]=30;
	pt[2]=80;
	pt[3]=90;
	pt[4]=560;
	pt[5]=90;
	pt[6]=600;
	pt[7]=30;
	pt[8]=pt[0];
	pt[9]=pt[1];
	drawpoly(4,pt);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
		setfillstyle(i,44);
		fillpoly(4,pt);
	}

	pt[0]=40;
	pt[1]=30;
	pt[2]=0;
	pt[3]=90;
	pt[4]=80;
	pt[5]=90;
	pt[6]=pt[0];
	pt[7]=pt[1];
	drawpoly(3,pt);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
		setfillstyle(i,3);
		fillpoly(3,pt);
	}
	pt[0]=600;
	pt[1]=30;
	pt[2]=560;
	pt[3]=90;
	pt[4]=640;
	pt[5]=90;
	pt[6]=pt[0];
	pt[7]=pt[1];
	drawpoly(3,pt);
	for(i=SOLID_FILL;i<=SOLID_FILL;i++)
	{
		setfillstyle(i,3);
		fillpoly(3,pt);
	}

	getch();
	closegraph();
}
