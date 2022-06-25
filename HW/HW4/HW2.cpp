#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct tel{
  char areacode[3];
  char no[8];
};
struct reco{
  char name[11];
  char sex;
  char edu;
  char major[3];
  char nation[4];
  tel te;
};
int main(){
  FILE *fp,*fp2;
  reco re[12],re2[12];
  if((fp=fopen("t3.dat","w+t"))==NULL){
    printf("fail to create t3.dat\n");
    exit(1);
  }
  for(int i=0;i<12;i++){
    printf("Please enter the name and sex and edu and major and nation and tel:\n");
    scanf("%s",&re[i].name);
    scanf(" %c",&re[i].sex);
    scanf(" %c",&re[i].edu);
    scanf("%s",&re[i].major);
    scanf("%s",&re[i].nation);
    scanf("%2s%7s",&re[i].te.areacode,&re[i].te.no);
    fprintf(fp,"%s %c %c %s %s %2s%7s\n",re[i].name,re[i].sex,re[i].edu,re[i].major,re[i].nation,re[i].te.areacode,re[i].te.no);
  }
  rewind(fp);
  printf("for 3:\n");
  for(int i=0;i<12;i++){
    fscanf(fp,"%s",&re2[i].name);
    fscanf(fp," %c",&re2[i].sex);
    fscanf(fp," %c",&re2[i].edu);
    fscanf(fp,"%s",&re2[i].major);
    fscanf(fp,"%s",&re2[i].nation);
    fscanf(fp,"%2s",&re2[i].te.areacode);
    fscanf(fp,"%7s",&re2[i].te.no);
    if(re2[i].sex=='1'&&re2[i].edu=='B'&&!strcmp(re2[i].major,"EE")){
      printf("%10s %c %c %2s %3s %2s-%7s\n",re2[i].name,re2[i].sex,re2[i].edu,re2[i].major,re2[i].nation,re2[i].te.areacode,re2[i].te.no);

    }
  }
  printf("for 4:\n");
  for(int i=0;i<12;i++){
    if(!strcmp(re2[i].nation,"ROC")&&!strcmp(re2[i].te.areacode,"02")){
       printf("%10s %c %c %2s %3s %2s-%7s\n",re2[i].name,re2[i].sex,re2[i].edu,re2[i].major,re2[i].nation,re2[i].te.areacode,re2[i].te.no);
    }
  }
  fclose(fp);
   if((fp2=fopen("t4.dat","w+b"))==NULL){
    printf("fail to create t4.dat\n");
    exit(1);
  }
  fwrite(re,sizeof(re),1,fp2);
  rewind(fp2);
  printf("for 3:\n");
  fread(re2,sizeof(re2),1,fp2);
  for(int i=0;i<12;i++){
    if(re2[i].sex=='1'&&re2[i].edu=='B'&&!strcmp(re2[i].major,"EE")){
      printf("%10s %c %c %2s %3s %2s-%7s\n",re2[i].name,re2[i].sex,re2[i].edu,re2[i].major,re2[i].nation,re2[i].te.areacode,re2[i].te.no);
    }
  }
  printf("for 4:\n");
  for(int i=0;i<12;i++){
    if(!strcmp(re2[i].nation,"ROC")&&!strcmp(re2[i].te.areacode,"02")){
       printf("%10s %c %c %2s %3s %2s-%7s\n",re2[i].name,re2[i].sex,re2[i].edu,re2[i].major,re2[i].nation,re2[i].te.areacode,re2[i].te.no);
    }
  }
  fclose(fp2);
  
  
  
  return 0;
}
