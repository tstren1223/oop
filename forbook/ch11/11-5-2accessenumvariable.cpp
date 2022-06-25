#include<stdio.h>
int main(){
  enum week{Sun,Mon,Tue,Wed,Thr,Fri,Sat};
 // week day;//set week as datatype cannot use ++
  int day;
  day=Sun;

  for(day=Sun;day<=Sat;day++)
    printf("%2d",day);
  printf("\n");
  return 0;
}
