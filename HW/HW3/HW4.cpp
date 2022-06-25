#include<stdio.h>
#include<math.h>
struct Point{
  double x,y;
};
struct Circle{
  double r;
  Point a;
};
double area(Circle b){
  return (M_PI*b.r*b.r);
}
int main(){
  Circle c;
  while(printf("Please input the values of x,y,and r of a circle!\n"),scanf("%lf%lf%lf",&c.a.x,&c.a.y,&c.r)!=EOF&&c.r>0){
    printf("The origin of circle is (%lf.%lf)with radius %lf having the area %lf.\n",c.a.x,c.a.y,c.r,area(c));
  }
  return 0;
}
