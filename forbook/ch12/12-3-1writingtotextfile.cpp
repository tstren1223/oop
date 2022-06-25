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
  if((fp=fopen("file05.txt","w"))==NULL){
    printf("Cannot open file!\n");
    exit(1);
  }
  do{
    printf("Enter id:");
    scanf("%s",&(p.id));
    printf("Enter name:");
    scanf("%s",&(p.name));
    printf("Enter math score:");
    scanf("%d",&(p.s1));
    printf("Enter bcc score:");
    scanf("%d",&(p.s2));
    fprintf(fp,"%s %s %d%d",p.id,p.name,p.s1,p.s2);
    printf("Continue or not (Y/N)? ");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  fclose(fp);
  printf("\nText file created.\n");
}
