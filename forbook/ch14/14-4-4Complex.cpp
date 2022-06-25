#include<iostream>
using namespace std;
class Complex{
  double real;
  double imag;
  public:
  Complex();
  Complex(double d);
  Complex(double r,double i);
  void set(double r1,double i1);
  void write();
  void operator+=(const Complex &);
  void operator-=(const Complex &);
};
Complex::Complex(){
  real=imag=0.0;
}
Complex::Complex(double d){
  real=imag=d;
}
Complex::Complex(double r,double i){
  real=r;
  imag=i;
}
void Complex::set(double r,double i){
  real=r;
  imag=i;
}
void Complex::write(){
  cout<<"Real part:"<<real<<"\t";
  cout<<"imag part:"<<imag<<endl;
}
void Complex::operator+=(const Complex &c){
  real=real+c.real;
  imag=imag+c.imag;
}
void Complex::operator-=(const Complex &c){
  real=real-c.real;
  imag=imag-c.imag;
}
int main(){
  Complex c1(0.0,0.0),c2(5.5);
  c1+=c2;
  c1.write();
  c2.write();
  c1.set(3.3,4.4);
  c2.set(6.6,9.9);
  c1-=c2;
  c1.write();
  c2.write();
  return 0;
}
