#include<stdio.h>
#include<string.h>
int main(){
  char s[80],*p;//p as a pointer
  strcpy(s,"Turbo C++ program language,I like it");
  p=strtok(s," ");
  printf(p);//ok for strings
  do{
    p=strtok(NULL,", ");//subsequent calls
    if(p)
      printf("|%s",p);
  }while(p);
  printf("\n");
  return 0;
}
