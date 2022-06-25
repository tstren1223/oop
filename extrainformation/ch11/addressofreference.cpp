#include<iostream>
using namespace std;
int main(){
  int a=5;
  cout<<&a<<"\n";
  int & b=a;
  cout<<"The address of b="<<&b<<"\n";//same as a==>aliases
  b=3;
  cout<<a<<","<<b<<endl;
  return 0;
}
