#include<stdio.h>
int main(){
  char s[80]="\0";
  for(int i=0;i<80;i++)
    printf("%d\n",s[i]);//initilize a string with"\0",then all the elements will be \0!
  return 0;
}
