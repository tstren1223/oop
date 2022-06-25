#include<stdio.h>
#include<stdlib.h>
int main(){
  struct{
    char id[7];
    char name[9];
    int s1,s2;
  }student;
  int temp;
  FILE*fp;
  fp=fopen("file07.dat","rb");
  if(fp==NULL){
    printf("Cannot open file.\n");
    exit(1);
  }
  rewind(fp);
  while(!feof(fp)&&fread(&student,sizeof(student),1,fp)){
    printf("ID  :%s\n",student.id);
    printf("NAME:%s\n",student.name);
    printf("MATH:%d\n",student.s1);
    printf("BCC :%d\n",student.s2);
  }
  fclose(fp);
  return 0;
}
