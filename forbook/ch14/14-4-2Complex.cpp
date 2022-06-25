#include<iostream>
#include"1441.h"
using namespace std;
int main(){
  Complex c1(1.1,2.2),c2(5.5,7.7),c3;
  c1.write();
  c2.write();
  c1.x=2;
  c3=c1.operator+(c2);//(c1+c2)
  c3.write();
  c1.set(3.3,4.4);
  c2.set(6.6,9.9);
  c3=c1-c2;
  c3.write();
  return 0;
}
