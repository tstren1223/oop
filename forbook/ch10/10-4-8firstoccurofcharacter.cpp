#include<stdio.h>
#include<string.h>
int main(){
  char s1[80]="abcdefghijk";
  char *s2;
  char s3[20];
  s2=strchr(s1,(int)'g');//strcpy(s3,strchr(s1,(int)'g'));
  printf("%s\n",s2);
  return 0;
}
