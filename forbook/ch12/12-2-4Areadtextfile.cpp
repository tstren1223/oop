#include<stdio.h>
int main(){
  FILE *inf;
  int x;
  inf=fopen("file01.txt","r");
  while(!feof(inf)){
    fscanf(inf,"%d",&x);
    printf("%d ",x);
  }
  printf("\nEnd of file...\n");
  fclose(inf);
  return 0;
}
