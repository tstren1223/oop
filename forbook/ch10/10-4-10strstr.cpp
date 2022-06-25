#include<stdio.h>
#include<string.h>
int main(){
  char s1[80]="abcdefghijk";
  char s2[80]="def";
  char *s3;
  s3=strstr(s1,s2);//see if s1 contains s2
  printf("%s\n",s3);
  return 0;
}
