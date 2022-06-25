#include<iostream>
using namespace std;
void fun1(int a1,float b1){
	cout<<"Sum="<<a1+b1<<endl;
}
void fun2(int a2,float b2){
	cout<<"Difference="<<a2-b2<<endl;
}
void fun3(int a3,float b3){
	cout<<"Product="<<a3*b3<<endl;
}
int main(){
	void(*f[3])(int,float)={fun1,fun2,fun3};
	int cho,x;
	float y;
	cout<<"Input x and y:";
	cin>>x>>y;
	cout<<"Enter 0,1,or 2. 3 to end:";
	cin>>cho;
	while(cho>=0&&cho<3){
		(*f[cho])(x,y);
		cout<<"Enter 0,1,or 2. 3 to end:";
		cin>>cho;
	}
	cout<<"Program excution completed."<<endl;
	return 0;
}
