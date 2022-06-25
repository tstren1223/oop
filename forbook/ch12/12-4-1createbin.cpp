#include<stdio.h>
#include<stdlib.h>
int main(){
  int x[10]={75,55,65,95,80,60,85,90,100,70};
  FILE*fp;
  if((fp=fopen("File06.dat","wb"))==NULL){
    printf("Cannot open file\n");
    exit(1);
  }
  fwrite(&x,sizeof(x),1,fp);
  //fwrite(&x,sizeof(x[0]),10,fp);//x and x[0] is not the same
  fclose(fp);
  printf("File of array created.\n");
  return 0;
}
