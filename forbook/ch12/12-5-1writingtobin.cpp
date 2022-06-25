#include<stdio.h>
#include<stdlib.h>
int main(){
  struct score{
    char id[7];
    char name[9];
    int s1,s2;
  };
  score student;
  char c;
  FILE*fp;
  if((fp=fopen("file07.dat","wb"))==NULL){
    printf("Cannot open file.\n");
    exit(1);
  }
  do{
    printf("Enter id: ");
    scanf("%s",&(student.id));
    printf("Enter name:");
    scanf("%s",&(student.name));
    printf("Enter math score: ");
    scanf("%d",&(student.s1));
    printf("Enter bcc score: ");
    scanf("%d",&(student.s2));
    fwrite(&student,sizeof(student),1,fp);
    printf("Countinue or not (Y/N)? ");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  fclose(fp);
  printf("\nFile of struct created.\n");
  return 0;
}
