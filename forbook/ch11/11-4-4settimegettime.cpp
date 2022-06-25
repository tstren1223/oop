#include<stdio.h>
#include<dos.h>//not for Dev-c and Unix c
int main(){

  unsigned i,j;
  struct time t;
  t.ti_hour =0;
  t.ti_min =0;
  t.ti_sec =0;
  t.ti_hund =0;
  settime(&t);//set the clock in the beginning
  for(i=0;i<65535;i++)
    for(j=0;j<6000;j++)
      ;//dummy loop
  gettime(&t);//obtain the clock
  printf("Total execution time: ");
  printf("%02d:%02d:%02d.%d\n",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);

  return 0;
}
