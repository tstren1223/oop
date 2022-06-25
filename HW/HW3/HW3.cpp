#include<stdio.h>
struct Point{
  double x;
  double y;
};
int quadrant(Point a){
  if(a.x>0&&a.y>0){
    return 1;
  }
  else if(a.x<0&&a.y>0){
    return 2;
  }
  else if(a.x<0&&a.y<0)
    return 3;
  else if(a.x>0&&a.y<0)
    return 4;
  else
    return 0;
  
}
int main(){
  Point a;
  while(printf("Please input the values of x and y!\n"),scanf("%lf%lf",&a.x,&a.y)!=EOF){
    switch(quadrant(a)){
      case 0:
        printf("(%lf,%lf) is on the origin!\n",a.x,a.y);
        break;
      case 1:
        printf("(%lf,%lf) is in the first quadrant!\n",a.x,a.y);
        break;
      case 2:
        printf("(%lf,%lf) is in the second quadrant!\n",a.x,a.y);
        break;
      case 3:
        printf("(%lf,%lf) is in the third quadrant!\n",a.x,a.y);
        break;
      case 4:
        printf("(%lf,%lf) is in the forth quadrant!\n",a.x,a.y);
        break;
    }
  }
  return 0;

}
