#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,j,k/*,l,m,n,o*/;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(!kbhit())
	{
		for(i=0,j=45,k=800/*,l=1000,m=730,n=1075*/;i<=310,j<=360,k>=-500/*,l>=-75/*,m>=-300,n>=0*/;i+=45,j+=45,k--)
		{

			//ceiling
			line(k+122,200,k+275,200);
			ellipse(k+150,246,110,160,80,50);
			ellipse(k+263,249,358,80,70,50);
			line(k+75,228,k+50,270);
			line(k+333,250,k+345,350);
			ellipse(k+295,405,350,45,70,80);
			ellipse(k+350,420,0,90,12,7);

			ellipse(k-65,410,90,140,7,10);
			ellipse(k+345,415,40,90,5,9);

			line(k-50,400,k-65,400);
			line(k+50,400,k+250,400);
			line(k-45,405,k-70,405);
			line(k+45,405,k+255,405);

			ellipse(k,405,5,175,50,55);
			ellipse(k+300,405,355,175,50,55);
			ellipse(k,405,0,180,45,50);
			ellipse(k+300,405,0,180,45,50);

			//Wheel
			sector(k,400,i,j,15,15);
			sector(k+300,400,i,j,15,15);
			//	setcolor(RED);
			//	rectangle(m,100,n,350);
			circle(k,400,40);
			sector(k,400,i,j,40,40);
			circle(k+300,400,40);
			sector(k+300,400,i,j,40,40);

		       //	delay(10);
			cleardevice();

		}
	}
       getch();
       closegraph();
}