#include<iostream>
using namespace std;
class testClass{
  public:
    void print() const;//const method
    void display();
    testClass();//default constructor
    testClass(int,int);
    testClass(int ,int ,double);
    testClass(double,char);
  private:
    int x,y;
    double z;
    char ch;
};
void testClass::print() const{
  //x++;y--;
  cout<<"x:"<<x<<"\ty:"<<y<<"\tz:"<<z<<"\tch:"<<ch<<endl;
}
void testClass::display(){
  x++;y--;z+=2;ch='#';
  cout<<"x:"<<x<<"\ty:"<<y<<"\tz:"<<z<<"\tch:"<<ch<<endl<<endl;
}
testClass::testClass(){
  cout<<"Default constructor"<<endl;
  x=0;
  y=0;
  z=0;
  ch='*';
}
testClass::testClass(int tX,int tY){
  cout<<"Two parameters constructor"<<endl;
  x=tX;
  y=tY;
  z=0;
  ch='*';
}
testClass::testClass(int tX,int tY,double tZ){
  cout<<"Three parameters constructor"<<endl;
  x=tX;
  y=tY;
  z=tZ;
  ch='*';
}
testClass::testClass(double tZ,char tCh){
  cout<<"Two parameters constructor"<<endl;
  x=0;
  y=0;
  z=tZ;
  ch=tCh;
}
int main(){
  testClass one;
  testClass two(5,6);
  testClass three(5,7,4.5);
  testClass four(4,9,12);
  testClass five(3.4,'D');
  one.print();
  one.display();
  two.print();
  two.display();
  three.print();
  four.print();
  five.print();
  return 0;
}
