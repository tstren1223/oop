#include<stdio.h>
int main(){
  char s1[]="abcdefghij";
  char *s2="mnopqrstuv";
  int i;
  for(i=0;i<10;i++) //array form
    printf("%c",s1[i]);
  printf("\n");
  printf("%s\n",s1);//string form
  for(i=0;i<10;i++)//pointer form
    printf("%c",*(s1+i));
  printf("\n");
  for(i=0;i<10;i++)//array form
    printf("%c",s2[i]);
  printf("\n");
  printf("%s\n",s2);//string form
  for(i=0;i<10;i++)//pointer form
    printf("%c",*(s2+i));
  printf("\n");
  return 0;
}
