#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std; 
struct Person{
   unsigned char sex:1;//unsigned char sex:101;//wrong because bitfield cannot exceed its type size!
   unsigned char married: 1;
   unsigned char estate:6;
   char name[20];
} p;
struct Person1{
   unsigned int sex:1;
   unsigned int married: 1;
   unsigned int salary:30;
   char name[20];
} p1;

int main(){
	cout<<sizeof(Person)<<endl;   //21
	cout<<sizeof(Person1)<<endl;  //24
	p.sex=0;
	p.married=0;
	p.estate=5;
	strcpy(p.name,"Mary");
	printf("p.sex= %d\n",p.sex);        //p.sex=0
	cout<<"p.sex= "<<p.sex<<endl;     //p.sex= 
	printf("p.married= %d\n",p.married);
	printf("p.estate= %d\n\n",p.estate);
	
	//cin>>p1.sex;//不能用because 不足1byte!
  p1.sex=1;
	p1.married=1;
	p1.salary=100000000;
	strcpy(p1.name,"John");
	cout<<"p1.sex= "<<p1.sex<<endl;
	cout<<"p1.married= "<<p1.married<<endl;
	cout<<"p1.salary= "<<p1.salary<<endl;
	cout<<p1.name<<endl;
	
/*	cin>>p1.salary;
	cout<<"p1.salary= "<<p1.salary<<endl;
	scanf(" %d",&(p.salary));
	cout<<"p1.salary= "<<p1.salary<<endl;*/
	
	int x;
	cout<<"Please enter salary:";
	cin>>x;
	p1.salary=x;
	cout<<"p1.salary= "<<p1.salary<<endl;
	return 0;
	
}

