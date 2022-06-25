#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  FILE*fp,*fp2,*fp3;
  int a,b,c,d[200],e[200];
  srand(time(NULL));
  if((fp=fopen("t1.dat","w+t"))==NULL){
    printf("t1.dat failed to open.\n");
    exit(1);
  }
  if((fp2=fopen("t2.dat","w+t"))==NULL){
    printf("t2.dat failed to open.\n");
    exit(1);
  }
  for(int i=0;i<200;i++){
    a=rand();
    fprintf(fp,"%d\n",a);
  }
  rewind(fp);
  for(int i=0;i<200;i++){
    fscanf(fp,"%d",&b);
    fprintf(fp2,"%d\n",b);
  }
  printf("%d\n",b);
  fclose(fp);
  rewind(fp2);
  if((fp3=fopen("t1.dat","a+t"))==NULL){
    printf("t1.dat failed to append.\n");
    exit(1);
  }
  for(int i=0;i<200;i++){
    fscanf(fp2,"%d",&c);
    fprintf(fp3,"%d\n",c);
  }
  fclose(fp2);
  rewind(fp3);
  for(int i=0;i<400;i++){
    fscanf(fp3,"%d",&a);
    if(i==399||i==199)
      printf("%d\n",a);
  }
  fclose(fp3);
  //binary part
  if((fp=fopen("t1.dat","w+b"))==NULL){
    printf("t1.dat failed to open.\n");
    exit(1);
  }
  if((fp2=fopen("t2.dat","w+b"))==NULL){
    printf("t2.dat failed to open.\n");
    exit(1);
  }
  for(int i=0;i<200;i++){
    d[i]=rand();
  }
  printf("\n\n%d\n\n",d[199]);
  fwrite(d,sizeof(d),1,fp);
  rewind(fp);
  fread(e,sizeof(e),1,fp);
  fwrite(e,sizeof(e),1,fp2);
  rewind(fp2);
  if((fp3=fopen("t1.dat","a+b"))==NULL){
    printf("t1.dat failed to append.\n");
    exit(1);
  }
  fread(d,sizeof(d),1,fp2);
  fwrite(d,sizeof(d),1,fp3);
  rewind(fp3);
  fread(d,sizeof(d),1,fp3);
  fread(e,sizeof(e),1,fp3);
  //for(int i=0;i<200;i++)
    printf("\n%d\n",d[199]);
    printf("\n\n\n");
  //for(int i=190;i<200;i++)
    printf("%d\n",e[199]);
  
  fcloseall();
  return 0;
}
