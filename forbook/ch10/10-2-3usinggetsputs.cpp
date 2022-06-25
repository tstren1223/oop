#include<stdio.h>
int main(){
  char s1[80],s2[80],*s3=new char [80];
  printtf("Enter the first string: ");
  gets(s1);
  printf("Enter the second string: ");
  gets(s2);
  printf("Enter the third string: ");
  gets(s3);
  printf("The first string = %s\n",s1);
  printf("The second string = %s\n",s2);
  printf("The third string = ");
  puts(s3);
  delete []s;
  return 0;
}
