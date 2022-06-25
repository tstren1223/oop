#include<stdio.h>
#include<stdlib.h>
int main(){
  int x[10];
  int i;
  FILE *fp;
  if((fp=fopen("File06.dat","rb"))==NULL){
    printf("Cannot open file.\n");
    exit(1);
  }
  rewind(fp);//ensure each data can be accessed
  fread(&x,sizeof(x),1,fp);
  for(int i=0;i<10;i++)
    printf("%4d",x[i]);
  printf("\n");
  fclose(fp);
  return 0;
}
