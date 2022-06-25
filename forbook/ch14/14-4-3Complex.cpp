#include<iostream>
using namespace std;
class Complex{
  double real;
  double imag;
  public:
  Complex(){
    real=imag=0.0;
  }
  Complex(double d){
    real=imag=d;
  }
  Complex(double r,double i){
    real=r;
    imag=i;
  }
  void set(double r1,double i1){
    real=r1;
    imag=i1;
  }
  void write();
  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
};
void Complex::write(){
  cout<<"Real part:"<<real<<"\t";
  cout<<"imag part:"<<imag<<endl;
}
Complex Complex::operator+(const Complex &c){
  Complex x;
  x.real=real+c.real;
  x.imag=imag+c.imag;
  return x;
}
Complex Complex::operator-(const Complex &c){
  Complex x;
  x.real=real-c.real;
  x.imag=imag-c.imag;
  return x;
}
int main(){
  Complex c1(0.0,0.0),c2(5.5),c3;
  c3=c1+c2;
  c3.write();
  c1.set(3.3,4.4);
  c2.set(6.6,9.9);
  c3=c1-c2;
  c3.write();
  return 0;
}
