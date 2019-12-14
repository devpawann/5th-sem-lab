#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//line(0,0,110,140);
setcolor(GREEN);

rectangle(100,100,300,300);
line(100,100,300,300);
line(100,300,300,100);
line(100,200,300,200);
line(100,200,300,200);
line(200,100,200,300);
line(200,100,100,200);
line(100,200,200,300);
line(200,300,300,200);
line(200,100,300,200);
line(150,100,150,300);
line(250,100,250,300);
line(100,150,300,150);
line(100,250,300,250);
//line(300,250,250,300);
//line(0,0,getmaxx(),getmaxy());
//line(getmaxx(),0,0,getmaxy());
//line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
//line(getmaxx()/2,0,getmaxx()/2,getmaxy());
//line(getmaxx()/4,0,getmaxx()/4,getmaxy());
//line(getmaxx()*1.5,0,getmaxx()*1.5,getmaxy());
//setcolor(RED);


//putpixel(50,50,WHITE);
//putpixel(50,90,GREEN);
//putpixel(50,100,15);
//rectangle(0,getmaxy()/2,getmaxx(),0); // Rectangle demo

//Circle
//circle(100,100,5);

//Elipse
//ellipse(100,100,0,360,100,70);

//Square
//rectangle(70,90,120,140);
//setcolor(RED);
//setfillstyle(1,RED);
//rectangle(70,80,120,190);
//floodfill(80,90,RED);
getch();
closegraph();

}