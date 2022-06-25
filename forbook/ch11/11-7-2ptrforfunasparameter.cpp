#include<iostream>
using namespace std;
double sum(double x,double y){
	return (x+y);
}
double dif(double a,double b){
	return (a-b);
}
void sub(double(*pf)(double,double),double p,double q){
	double k;
	k=(*pf)(p,q);
	cout<<"Result = "<<k<<endl;
}
int main(){
	int choice;
	double x,y;
	cout<<"Please enter 1 to add or 2 to sub: ";
	cin>>choice;
	cout<<"Please enter your data x and y: ";
	cin>>x>>y;
	switch(choice){
		case 1:
			sub(sum,x,y);
			break;
		case 2:
			sub(dif,x,y);
			break;
		default:
			break;
	}
	return 0;
}
