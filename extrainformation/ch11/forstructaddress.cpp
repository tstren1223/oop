#include<stdio.h>
struct a{
  int b;
};
int main(){
  a c;
  printf("%p",&c);//also can printf("%p",(void*)&c);
//a d=c;//then c's valuse copy to d!
  return 0;
}
