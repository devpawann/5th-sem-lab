#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm;
	float xc,yc,rx,ry,dx,dy,d1,d2,x,y;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("Enter xc,yc and radius");
	scanf("%f%f%f%f",&xc,&yc,&rx,&ry);
	x=0;
	y=ry;
	d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
	dx=2*ry*ry*x;
	dy=2*rx*rx*y;
	while(dx<dy){
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		if (d1<0){
			x++;
			dx=dx+(2*ry*ry);
			d1=d1+dx+(ry*ry);
		}else{
			x++;
			y--;
			dx=dx+(2*ry*ry);
			dy=dy-(2*rx*rx);
			d1=d1+dx-dy+(ry*ry);
		}

	}
	d2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
	while(y>=0){
		putpixel(x+xc,y+yc,WHITE);
		putpixel(-x+xc,y+yc,WHITE);
		putpixel(x+xc,-y+yc,WHITE);
		putpixel(-x+xc,-y+yc,WHITE);
		if (d2>0){
			y--;
			dy=dy-(2*rx*rx);
			d2=d2+(rx*rx)-dy;
		}else{
			y--;
			x++;
			dx=dx+(2*ry*ry);
			dy=dy-(2*rx*rx);
			d2=d2+dx-dy+(rx*rx);

		}
	}

	getch();
	closegraph();
}
//Completed