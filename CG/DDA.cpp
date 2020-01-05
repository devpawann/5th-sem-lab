#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
	int Xinc,Yinc,dx,dy,x1,y1,x2,y2,step;
	cout<<"Enter two coordinate\n";
	cin>>x1>>y1>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy)){
		step=dx;
		cout<<"Step=dx="<<dx<<endl;
	}else{
		step=dy;
		cout<<"Step=dy="<<dy<<endl;
	}
	Xinc=dx/step;
	Yinc=dy/step;
	cout<<"Xinc="<<Xinc<<"Yinc="<<Yinc<<endl;
	cout<<"i (Xi,Yi) (Xi+1,Yi+1)\n";
	for(int i=1;i<=7;i++){
		cout<<i<<ends<<ends<<ends;
		cout<<"("<<x1<<","<<y1<<")"<<ends<<ends<<ends;
		round(x1=x1+Xinc);
		round(y1=y1+Yinc);
		cout<<"("<<x1<<","<<y1<<")"<<endl;
				
	}
	
	
}
