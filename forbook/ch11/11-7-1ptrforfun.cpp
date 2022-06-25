#include<iostream>
using namespace std;
double sum(double x,double y){
	return (x+y);
}
double dif(double a,double b){
	return (a-b);
}
int main(){
	double(*pf)(double,double),f;
	pf=sum;
	f=(*pf)(50,60);
	cout<<"f="<<f<<endl;
	pf=dif;
	f=(*pf)(50,60);
	cout<<"f="<<f<<endl;
	return 0;
}
