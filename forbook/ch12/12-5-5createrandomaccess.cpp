#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 47
struct score{
  char id[7];
  char name[9];
  int s1,s2;
};
score stu;
FILE*fp;
void blankfillin()//make empty records
{
  for(int i=0;i<n;i++){
    strcpy(stu.id,"000000");
    strcpy(stu.name,"********");
    stu.s1=0;
    stu.s2=0;
    fwrite(&stu,sizeof(stu),1,fp);
  }
}
int hash(char key[7]){//hash function:folding method
  int num,sum=0;
  num=atoi(key);//key number(string)=>long int
  while(num>0){
    sum+=(num)%100;
    num/=100;
  }
  return (sum)%n;
}
//move the pointer to the next slot
int next_location(int recnum){
  return ((recnum+1)%n);
}
int empty(int recnum)//determine if the slot is empty
{
    fseek(fp,sizeof(stu)*recnum,SEEK_SET);
    fread(&stu,sizeof(stu),1,fp);
    if(strcmp(stu.id,"000000")==0)//empty
      return 1;
    else
      return 0;
}
int main(){
  char query_id[7],c;
  int home_address,collision;
  if((fp=fopen("file08.dat","w+b"))==NULL){
    printf("Cannot open file.\n");
    exit(1);
  }
  rewind(fp);
  //creat empty record
  blankfillin();
  do{
    //adding record
    printf("Enter record ID: ");
    scanf("%s",&query_id);
    //convert key value to record number
    home_address=hash(query_id);
    do{
      //check if collision occurs
      collision=!(empty(home_address));
      if(collision)
        if(strcmp(stu.id,query_id)==0){
          //the same key value
          printf("Data duplicated...\n");
          break;
        }
        else//move to the next slot
          home_address=next_location(home_address);
    
    }while(collision);
    if(collision)//duplicated data;collision=1
      continue;
    strcpy(stu.id,query_id);
    printf("Enter name:");
    scanf("%s",&(stu.name));
    printf("Enter math:");
    scanf("%d",&(stu.s1));
    printf("Enter bcc:");
    scanf("%d",&(stu.s2));
    fseek(fp,sizeof(stu)*home_address,SEEK_SET);
    fwrite(&stu,sizeof(stu),1,fp);
    printf("Continue or not (Y/N)?");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  fclose(fp);
  printf("DAM file created.\n");
  return 0;
}
