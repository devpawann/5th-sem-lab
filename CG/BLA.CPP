#include<stdio.h>
//#include<graphics.h>
#include<conio.h>

int main(){
	//1.BLA for m<1
	int x1,y1,x2,y2,dx,dy,p,gd,gm;
	//initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("Enter two coordinate\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>dy){
		//Case1
		printf("M<1\n");
			printf("(Xk,Yk) Pk (Xk+1,Yk+1) Pk+1)\n");
		p=2*dy-dx;
		do{
//		putpixel(x1,y1,RED);
		printf("%d,%d\t %d\t",x1,y1,p);
		x1++;
		if(p<0){
			p=p+2*dy;
			printf(" %d,%d \t %d\n",x1,y1,p);
		}else{
			p=p+2*dy-2*dx;
			y1++;
					printf("%d,%d \t %d\n",x1,y1,p);
		}
	}while(x1<x2);

	}else{
		//Case 2
		printf("M>1\n");
		printf("(Xk,Yk) Pk (Xk+1,Yk+1) Pk+1)\n");
		p=2*dx-dy;
		do{
		//putpixel(x1,y1);
		printf("%d,%d\t %d\t",x1,y1,p);
		y1++;
		if(p<0){
			p=p+2*dx;
				printf(" %d,%d \t %d\n",x1,y1,p);
		}else{
			p=p+2*dx-2*dy;
			x1++;
					printf("%d,%d \t %d\n",x1,y1,p);
		}
	}while(y1<y2);

	}
	getch();
	return 0;
}

