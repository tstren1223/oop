#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *inf;
  int x;
  inf=fopen("file01.txt","r");
  if(!inf){
    printf("Error: cannot open file!\n");
    exit(1);
  }
  while(!feof(inf)&&fscanf(inf,"%d",&x)!=EOF)
    printf("%d ",x);
  printf("\nEnd of file...\n");
  fclose(inf);
  return 0;
}
