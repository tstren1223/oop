#include<iostream>
using namespace std;
class Complex{
  double real;
  double imag;
  public:
    int x;
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
  void write(){
    cout<<"Real part:"<<real<<"\t";
    cout<<"imag part:"<<imag<<endl;
  }
  Complex operator +(const Complex &c){
    //c.real++;c.imag--;//error
    Complex x;
    x.real=real+c.real;
    x.imag=imag+c.imag;
    return x;
  }
  void operator+=(const Complex &c){
    real+=c.real;
    imag+=c.imag;
  }
  Complex operator-(const Complex &c){
    Complex x;
    x.real=real-c.real;
    x.imag=imag-c.imag;
    return x;
  }
  friend Complex operator+(double x,const Complex &c);
};
Complex operator+(double r,const Complex &c){
  Complex x;
  x.real=r+c.real;
  x.imag=c.imag;
  return x;
}
