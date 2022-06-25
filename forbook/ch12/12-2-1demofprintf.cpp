#include<stdio.h>
int main(){
  int n1=16;
  float n2=3.141592654f;
  FILE *fp;
  fp=fopen("data.txt","w");
  fprintf(fp,"%d %f",n1,n2);
  fclose(fp);
  return 0;
}
