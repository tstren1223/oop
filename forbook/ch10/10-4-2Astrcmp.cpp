#include<stdio.h>
#include<string.h>
int main(){
  char *s1=new char[80],*s2=new char[80];
  printf("Enter the first string: ");
  gets(s1);
  printf("Enter the second string: ");
  gets(s2);
  if(strcmp(s1,s2)<0)
    printf("first string<second string.\n");
  else if(strcmp(s1,s2)==0)
    printf("first string = second string.\n");
  else
    printf("first string>second string.\n");
  delete[]s1;
  delete[]s2;
  return 0;
}
