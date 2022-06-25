#include<stdio.h>
union iandf{
  int i;
  double r;
};

int main(){
  iandf samebox;
  samebox.i=123;
  printf("Size of (union iandf) = %d\n",sizeof(union iandf));
  printf("The address of samebox.i = %u\n",&(samebox.i));
  printf("The address of samebox.r= %u\n",&(samebox.r));
  printf("The content of samebox.i = %d\n",samebox.i);
  printf("The content of samebox.r = %7.5f\n",samebox.r);
  samebox.r=1.23456;
  printf("The content of smaebox.r = %7.5f\n",samebox.r);
  printf("The content of samebox.i = %d\n",samebox.i);
  return 0;

}
