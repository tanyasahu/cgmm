#include<iostream.h>
#include<graphics.h>
#include<conio.h>
voidbfill(intx,inty,intbcol,intfcol)
{
intccol = getpixel(x,y);
if(ccol!=fcol&&ccol!=bcol)
{
putpixel(x,y,fcol);
bfill(x+1,y,bcol,fcol);
bfill(x,y+1,bcol,fcol);
bfill(x-1,y,bcol,fcol);
bfill(x,y-1,bcol,fcol);
}}
void main()
{
clrscr();
intgd = DETECT,gm;
initgraph(&gd,&gm,"C://TurboC3//BGI");
cout<<"\t\tBoundary Fill Algorithm\t\t"<<endl;
intl,t,r,b;
cout<<"Enter the length of side of rectangle : "<<endl;
cin>>l>>t>>r>>b;
rectangle(l,t,r,b);
intx,y;
cout<<"Enter coordinate of any interior point : ";
cin>>x>>y;
bfill(x,y,15,10);
getch();
}
