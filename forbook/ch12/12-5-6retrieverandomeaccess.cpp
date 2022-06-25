#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 47
struct score{
  char id[7];
  char name[9];
  int s1,s2;
};
struct score stu;
FILE*fp;
int hash(char key[7]){
  long int num,sum=0;
  num=atol(key);
  while(num>0){
    sum+=(num%100);
    num/=100;
  }
  return ((int)sum%n);
}
int next_location(int recnum){
  return ((recnum+1))%n;
}
int empty(int recnum){
  fseek(fp,sizeof(stu)*recnum,SEEK_SET);
  fread(&stu,sizeof(stu),1,fp);
  if(strcmp(stu.id,"000000")==0)//empty
    return 1;
  else 
    return 0;
}
int main(){
  char query_id[7],c;
  int home_address,exist;
  if((fp=fopen("file08.dat","r+b"))==NULL){
    printf("Cannot open file.\n");
    exit(1);
  }
  do{
    printf("Enter record ID:");
    scanf("%s",&query_id);
    home_address=hash(query_id);
    do{
      exist=!empty(home_address);
      if(!exist)//empty record=>wrong ID
      {
        printf("Invalid ID.Record not found.\n");
        break;
      }
      else if(strcmp(stu.id,query_id)==0){
      //found
        printf("ID: %s,NAME: %s,MATH: %d,BCC: %d\n",stu.id,stu.name,stu.s1,stu.s2);
        break;
      }
      else //collision
        home_address=next_location(home_address);
    }while(exist);//ID collision:may still be wrong ID
    printf("Continue or not (Y/N)?");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  printf("DAM file retrived demo success.\n");
  fclose(fp);
  return 0;
}
