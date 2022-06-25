#include<stdio.h>
#include<stdlib.h>
int main(){
  struct score{
    char id[7];
    char name[9];
    int s1,s2;
  };
  score s;
  FILE*fp;
  int recnum,sw;//record number
  char c;
  if((fp=fopen("file07.dat","rb+"))==NULL){
    printf("can not open file.\n");
    exit(1);
  }
  do{
    printf("Enter record number:");
    scanf("%d",&recnum);
    fseek(fp,sizeof(s)*recnum,SEEK_SET);//35
    if(fread(&s,sizeof(s),1,fp)&&!feof(fp)){
      printf("1.ID:%s,2.NAME:%s,3.MATH:%d,4.BCC:%d\n",s.id,s.name,s.s1,s.s2);
        do{
         printf("Which field do you update(1-4, 0 for exit)?");
         scanf("%d",&sw);
        } while((sw<0)||(sw>4));
        switch(sw){
          case 1:
            printf("Enter new id:");
            scanf("%s",&(s.id));
            break;
          case 2:
            printf("Enter new name:");
            scanf("%s",&(s.name));
            break;
          case 3:
            printf("Enter correct math score:");
            scanf("%d",&(s.s1));
            break;
          case 4:
            printf("Enter new bcc:");
            scanf("%d",&(s.s2));
            break;
          defult:;
        }
        //the pointer has located to the next record
        ////because of the "fread" statement in Line 21
        //we must move the pointer back to the original record.
        fseek(fp,sizeof(s)*recnum,SEEK_SET);
        fwrite(&s,sizeof(s),1,fp);
    } 
    else
      printf("Input error!\n");
    printf("Continue or not (Y/N)? ");
    scanf(" %c",&c);
  }while(c=='Y'||c=='y');
  fclose(fp);
  return 0;
}
