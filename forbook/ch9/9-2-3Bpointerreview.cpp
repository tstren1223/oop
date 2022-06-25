#include<iostream>
using namespace std;
void sub1(int *p){
    cout<<" *p="<<*p<<endl;
    (*p)=5;
    cout<<" *p="<<*p<<endl;
}
void sub(int *r){
    r=new int;//actually,*r is local variable,so before r new ,r points to what parameter points to.However,after new,r has its own value to point to!
    *r=5;
    cout<<"\n *r="<<*r<<"\t r="<<r<<endl;
}
void sub2(int *q){
    cout<<"\n Enter sub2:"<<"\t *q="<<*q<<endl;
    q=new int;
    *q=10;
    cout<<" *q="<<*q<<"\t q="<<q<<endl;
}

void sub3(int **r){//r=&t,so*r=t,**r=*t,we can change what t points to!
    cout<<"\n Enter sub3:"<<"\t **r="<<**r<<endl;
    *r=new int;
    **r=10;
    cout<<"**r="<<**r<<"\t *r="<<*r<<endl;
}

int main(){
    int a=100,b=200;
    int *s=&a,*t=&b,*x=NULL;//not (*x)=NULL;
    //int *x;
    //x=NULL;
    //int *x;
    //*x=NULL;//error
    cout<<"a="<<a;
    sub1(s);
    cout<<"   a="<<a;//test for *p whether change a the pointer p points to

    //sub1(x);//run time error!*p no memory!//x points to NULL so value change not allowed
    sub(x);//check for new in function
    //cout<<"*x="<<*x<<endl;//run time error!
    cout<<"x="<<x<<endl;


    cout<<"\nGall sub2";
    cout<<"\nb="<<b<<"\t t="<<t<<endl;
    sub2(t);//for new operation with local function parameters
    cout<<"*t="<<*t<<"\t t="<<t<<endl;
    cout<<"b="<<b<<endl<<endl;

    cout<<"\nGall Sub3:";
    sub3(&t);//test for call by address and change pointers in main fuction!
    cout<<"*t="<<*t<<"  t="<<t<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
