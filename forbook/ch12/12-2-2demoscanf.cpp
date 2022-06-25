#include<stdio.h>
int main(){
  int n1;
  float n2;
  FILE *fp;
  fp=fopen("data.txt","r");
  fscanf(fp,"%d %f",&n1,&n2);
  printf("%d %f\n",n1,n2);
  fclose(fp);
  return 0;
}
