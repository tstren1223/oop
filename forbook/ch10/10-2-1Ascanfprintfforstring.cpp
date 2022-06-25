#include<stdio.h>
int main(){
  char s1[80];
  char *s2;
  s2=new char[80];
  printf("Enter 1st string: ");
  scanf(" %s",s1);//gets(s1);
  printf("Enter 2nd string: ");
  scanf(" %s",s2);//gets(s2);
  printf("1st string: %s\n",s1);
  printf("2nd string: %s\n",s2);
  //puts(s2);
  delete []s2;
  return 0;
}
