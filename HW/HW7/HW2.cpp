#include<stdio.h>
#include<iostream>
#include<conio.h>      //for gotoxy
using namespace std;
class rectangle{
	int x,y,width,height;//x,y left top
	public:
		rectangle(){
			x=0,y=0,width=0,height=0;
		};
		rectangle(int a,int b,int c,int d){
			x=a,y=b,width=c,height=d;
		}
		rectangle(int a,int b){
			x=0;
			y=0;
			width=a,height=b;
		}
		int calPerimeter(){
			return 2*width+2*height;
		}
		int calArea(){
			return width*height;
		}
		void draw(){
			for(int i=0;i<y;i++)
				cout<<endl;
			for(int i=0;i<x;i++)
				cout<<" ";
			for(int i=0;i<height;i++){ 
			if(i==0||i==height-1)
					for(int j=0;j<width;j++){
						cout<<"-";
					}
			else{
				for(int j=0;j<width-1+x;j++){
						cout<<" ";
					}
					cout<<"|";	
				}
				if(i<height-2)
					cout<<endl<<"|";
					else{
					cout<<endl;
					for(int j=0;j<x;j++)
						cout<<" ";
					}
			} 
		}
};
int main(){
	rectangle a(1,1,5,8);
	
	a.draw();	
	cout<<endl<<a.calPerimeter()<<endl<<a.calArea()<<endl;
}
