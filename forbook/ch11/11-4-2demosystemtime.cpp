#include<stdio.h>
#include<time.h>
int main(){

  struct tm *t;
  time_t tt;
  tt=time(NULL);
  t=gmtime(&tt);
  printf("The date and time is %s\n",asctime(t));
  printf("The date and time is %s\n",ctime(&tt));
  return 0;
}
