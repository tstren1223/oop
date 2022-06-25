#include<stdio.h>
#include<stdlib.h>
int main(){
  struct score{
    char id[7];
    char name[9];
    int s1,s2;
  };
  score student;
  FILE*fp;
  int recnum;//record number
  char c;
  if((fp=fopen("file07.dat","rb"))==NULL){
    printf("can not open file.\n");
    exit(1);
  }
  do{
    printf("Enter record number:");
    scanf("%d",&recnum);
    //find the offfset;SEEK_SET:from the beginning
    fseek(fp,sizeof(student)*recnum,SEEK_SET);//35
    if(fread(&student,sizeof(student),1,fp)&&!feof(fp)){
      printf("ID  :%s\n",student.id);
      printf("NAME:%s\n",student.name);
      printf("MATH:%d\n",student.s1);
      printf("BCC :%d\n",student.s2);
    }
    else
      printf("Error input!\n");
    printf("Continue or not (Y/N)? ");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  fclose(fp);
  return 0;
}
