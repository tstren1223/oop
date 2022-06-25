#include<stdio.h>
#include<string.h>
int main(){
  char id[8];
  int i,s=0,cd;
  printf("Enter id: ");
  scanf("%s",&id);
  for(i=0;i<strlen(id)-1;i++)
    s+=(((int)*(id+i))-48)*(strlen(id)-i-1);
  cd=10-s%10;
  if(cd==10)
    cd=0;
  if(cd==((int)*(id+strlen(id)-1))-48)
    printf("The id %s is correct!\n",id);
  else
    printf("%s is incorrect!\n",id);
  return 0;
}
