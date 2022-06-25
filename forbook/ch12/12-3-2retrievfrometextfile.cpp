#include<stdio.h>
#include<stdlib.h>
int main(){
  struct score{
    char id[7];
    char name[9];
    int s1,s2;
  };
  score p;
  char c;
  FILE*fp;
  if((fp=fopen("file05.txt","r"))==NULL){
    printf("Cannot open file!\n");
    exit(1);
  }
  while(fscanf(fp,"%s %s %d %d",&(p.id),&(p.name),&(p.s1),&(p.s2))!=EOF)
    printf("%6s %8s %4d %4d",p.id,p.name,p.s1,p.s2);
  fclose(fp);
  printf("End of file.\n");
  return 0;
}
