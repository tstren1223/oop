#include<stdio.h>
#include<string.h>
char *tlb(char*s)//lead blank
{
  int i;
  for(i=0;i<strlen(s);i++)
    if(s[i]!=' ')
      break;
  s=strchr(s,s[i]);
  return s;
}
int ttb(char *s)//backing blank
{
  int i;
  for(i=strlen(s)-1;i>=0;i--)
    if(s[i]!=' ')
      break;
  return i;
}
int main(){
  char s1[80]="       Turbo  C       ",s2[80];
  strcpy(s2,tlb(s1));
  s2[ttb(s2)+1]='\0';
  printf("%s.\n",s2);
  return 0;
}
