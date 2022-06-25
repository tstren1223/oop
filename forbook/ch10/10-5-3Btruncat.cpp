#include<stdio.h>
#include<string.h>
int main(){
  char s1[80]="       Turbo  C       ",*s2;
  int i;
  //leading blank
  for(i=0;i<strlen(s1);i++){
    if(s1[i]!=' ')
      break;
  }
  s2=strchr(s1,(int)s1[i]);
  //backing blank
  for(i=strlen(s2)-1;i>=0;i--)
    if(s2[i]!=' ')
      break;
  s2[i+1]='\0';
  printf("The string is %s.\n",s2);
  return 0;
}
