#include<iostream>
using namespace std;

int dec_Bin(int x,int a[8]){
	
	for(int i=7;i>=0;i--){
		a[i]=x%2;
		x=x/2;
		
	}
}

void disp(int a[]){
		for(int i=0;i<=7;i++){
		cout<<a[i];
	}
	
}

int add(int a[],int b[]){
	int c=0,sum[8];
	for(int i=7;i>=0;i--){
		sum[i]=(a[i]+b[i]+c)%2;
		c=(a[i]+b[i]+c)/2;
	}
	disp(sum);
}
int main(){
	int num1,num2, bnum1[8],bnum2[8];
	cout<<"Enter two number between 0-255\n";
	cin>>num1;
	cout<<"\n";
	cin>>num2;
	
	cout<<"Binary of 1st num is\n";
	dec_Bin(num1,bnum1);
	disp(bnum1);
	

	
	cout<<"\nBinary of 2nd num is\n";
	dec_Bin(num2,bnum2);
	disp(bnum2);
	
	cout<<"\nSum of 2 number is\n";
	add(bnum1,bnum2);
	

	
}



