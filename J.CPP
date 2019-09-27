#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<device.h>
#define ROUND(a) ((int)(a+0.5))
void lineDDA(int xa, int ya, int xb, int yb)
{
	int dx=xb-xa, dy=yb-ya, steps,k;
	float xincrement, yincrement, x=xa, y=ya;
	if (abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	xincrement=dx/(float)steps;
	yincrement=dy/(float)steps;
	setpixel(ROUND(x),ROUND(y));
	for(k=0;k<steps;k++)
	{
		x+=xincrement;
		y+=yincrement;
		setpixel(ROUND(x),ROUND(y));
	}
}