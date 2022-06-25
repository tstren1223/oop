#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct reco{
  int ID;
  char name[6];
  int s1;
  int s2;
};
void merge(FILE*fp,FILE*fp1,FILE*fp2){
  reco r1[4],r2[4],t; 
  for(int i=0;i<=1;i++){
    fscanf(fp,"%d",&r1[i].ID);
    fscanf(fp,"%5s",&r1[i].name);
    fscanf(fp,"%d",&r1[i].s1);
    fscanf(fp,"%d",&r1[i].s2);
  }
  for(int i=2;i<=3;i++){
    fscanf(fp1,"%d",&r1[i].ID);
    fscanf(fp1,"%5s",&r1[i].name);
    fscanf(fp1,"%d",&r1[i].s1);
    fscanf(fp1,"%d",&r1[i].s2);
  }
  for(int i=0;i<3;i++){
    for(int j=i+1;j<4;j++){
      if(r1[i].ID>r1[j].ID){//sorted
        t=r1[i];
        r1[i]=r1[j];
        r1[j]=t;
      }
    }
  }
  printf("step2:\nsmallest:\n");
  printf("%d %5s %d %d\nbiggest:\n",r1[0].ID,r1[0].name,r1[0].s1,r1[0].s2);
  printf("%d %5s %d %d\n",r1[3].ID,r1[3].name,r1[3].s1,r1[3].s2);
  printf("step3:\n");
  fwrite(r1,sizeof(r1),1,fp2);
  rewind(fp2);
  fread(r2,sizeof(r2),1,fp2);
  for(int i=0;i<4;i++)
   printf("%d %5s %d %d\n",r2[i].ID,r2[i].name,r2[i].s1,r2[i].s2);
}
int main(){
  reco re[2],re2[2];
  re[0].ID=11;
  strcpy(re[0].name,"John");
  re[0].s1=87;
  re[0].s2=65;
  re[1].ID=37;
  strcpy(re[1].name,"Merry");
  re[1].s1=93;
  re[1].s2=72;
  re2[0].ID=19;
  strcpy(re2[0].name,"Joh");
  re2[0].s1=88;
  re2[0].s2=66;
  re2[1].ID=38;
  strcpy(re2[1].name,"May");
  re2[1].s1=99;
  re2[1].s2=7;
  FILE*fp,*fp1,*fp2;
  if((fp=fopen("t5.dat","w+t"))==NULL){
    printf("t5.dat failed to open.\n");
    exit(1);
  }
  if((fp1=fopen("t6.dat","w+t"))==NULL){
    printf("t6.dat failed to open.\n");
    exit(1);
  }
  if((fp2=fopen("t7.dat","w+b"))==NULL){
    printf("t7.dat failed to open.\n");
    exit(1);
  }

  for(int i=0;i<=1;i++)
    fprintf(fp,"%d %5s %d %d\n",re[i].ID,re[i].name,re[i].s1,re[i].s2);

  for(int i=0;i<=1;i++)
    fprintf(fp1,"%d %5s %d %d\n",re2[i].ID,re2[i].name,re2[i].s1,re2[i].s2);
  rewind(fp);
  rewind(fp1);
  merge(fp,fp1,fp2);
  fcloseall();
  return 0;
}
