#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
char *func(intx,int y)
{	
	char *p,*q;
	itoa(x,p,10);
	strcat(p,",");
	itoa(y,q,10);
	strcat(p,q);
	return p;
}

void main()
{
	intgdriver, gmode, errorcode;
	detectgraph(&gdriver, &gmode);
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	cleardevice();
	cout<<"\t-------| Bresenham's line algorithm |---------";
	int x1,y1,x2,y2;
	cout<<endl<<"Enter coordinates";
	cin>>x1>>y1>>x2>>y2;
	int dx=x2-x1;
	intdy=y2-y1;
	int a=2*dy - 2*dx;
	int p0=2*dy - dx;
	int k=0,pk,pk1;
	pk=p0;
	char *corrdinate=func(x1,y1);
	outtextxy(x1-2,y1-2,corrdinate);
	while(k++!=dx)
	{
	int temp=pk1;
	if(pk<0)
	{
	x1+=1;
	y1+=0;
	pk1=pk+(2*dy);
	}
	else
	{
	x1+=1;
	y1+=1;
	pk1=pk+2*(dy-dx);
	}
	putpixel(x1,y1,WHITE);
	pk=temp;
	}
	char *cordinate=func(x1,y1);
	outtextxy(x1+2,y1+2,cordinate);
	getch();
}
