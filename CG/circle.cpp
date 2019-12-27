#include<conio.h>

#include<graphics.h>

int main(){
int gd=DETECT,gm,i;

initgraph(&gd,&gm,"C://TurboC3//BGI");
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

getch();
closegraph();
return 0;
}