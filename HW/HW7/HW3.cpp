#include<stio.h>
#include<iostream>
using namespace std;
class Quadratic{
	int a,b,c;
	public:
		Quadratic(){
			a=0,b=0,c=0;
		}
		Quadratic(int d,int e,int f){
			a=d,b=e,c=f;
		}
		int getDis(){
			return b*b-4*a*c;
		}
		
}; 
