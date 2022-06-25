#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *inf,*outf;
  int num;
  inf = fopen("file03.txt","r");
  if(!inf){
    printf("Cannot open file!\n");
    exit(1);
  }
  outf=fopen("file04.txt","w");
  while(!feof(inf)&&fscanf(inf,"%d",&num)!=EOF)
    fprintf(outf," %d",num*2);
  fcloseall();
  //fclose(inf);
  //fclose(outf);
  printf("File processing ok.\n");
  return 0;
}
