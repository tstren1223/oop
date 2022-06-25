#include<stdio.h>
struct a8{
  int b;
  double c;
};
a8 y(int o){//struct can be function
  a8 u;
  u.c=o;
  return u;
}
int main(){
  a8 d;
  d=y(1);
  printf("%lf",d.c);
  return 0;
}
