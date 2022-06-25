#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
  FILE *fp;
  char ch;
  int count=0;
  if(argc!=2){
    printf("You miss the file name.\n");
    exit(1);
  }
  if((fp=fopen(argv[1],"r+t"))==NULL){
    printf("Can not open file.\n");
    exit(1);
  }
  while(getc(fp)!=EOF)
    count++;
  fclose(fp);
  printf("FILE %s has %d characters.\n",argv[1],count);
  return 0;
}
