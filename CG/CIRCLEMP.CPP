#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
	int gd=DETECT,gm,r,x,y,xc,yc,p;
	initgraph(&gd,&gm,"C://TurboC3//BGI");
//        circle(100,200,20);
	printf("Enter radius\n");
	scanf("%d",&r);
	printf("Enter center");
	scanf("%d%d",&xc,&yc);
	//drawCircle(x,y,r);
	 x=0,y=r;
	p=1-r;
	putpixel(xc+x,yc+y,15);

	while(x<=y){
		if(p<=0){
			p=p+2*x+3;


		}
		else{
			p=p+2*x+5-2*y;
			y--;
		}

	putpixel(xc+x,yc+y,15);
	putpixel(xc+x,yc-y,15);
	putpixel(xc-x,yc+y,15);
	putpixel(xc-x,yc-y,15);
	putpixel(xc+y,yc+x,15);
	putpixel(xc+y,yc-x,15);
	putpixel(xc-y,yc+x,15);
	putpixel(xc-y,yc-x,15);
       x++;	}

	getch();
	return 0;
	closegraph();
}
