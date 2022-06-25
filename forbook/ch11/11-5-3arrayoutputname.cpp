#include<stdio.h>
int main(){
  enum week{Sun,Mon,Tue,Wed,Thr,Sat};
  int day;
  char dayname[7][4]={"Sun","Mon","Tue","Wed","Thr","Fri","Sat"};
  for(day=Sun;day<=Sat;day++)
    printf("%4s\n",dayname[day]);

  return 0;
}
