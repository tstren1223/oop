#include<stdio.h>
#include<time.h>
int main(){
  unsigned long i,count=1000000000;
  double tused;
  time_t tstart,tend;//long tstart
  //get the time before executing the loop

  time(&tstart);//tstart = time(NULL);
  for(i =1;i<=count;i++){
    (double)(i+i);
    (double)(i-i);
    (double)(i*2);
    (double)(i/2);
  }
  //get the time after executing the loop
  time(&tend);//tend=time(NULL);
  tused = difftime(tend,tstart);
  printf("%lu loops ran for %lg seconds.\n",count,tused);

  return 0;
};
