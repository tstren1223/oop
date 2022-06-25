#include<stdio.h>
#include<string.h>
void tlb(char*s)//lead blank
{
  int i;
  for(i=0;i<strlen(s);i++)
    if(s[i]!=' ')
      break;
  strcpy(s,strchr(s,s[i]));//s=strchr(s,s[i]);//error
  return s;
}
void ttb(char *s)//backing blank
{
  int i;
  for(i=strlen(s)-1;i>=0;i--)
    if(s[i]!=' ')
      break;
  s[i+1]='\0';
}
int main(){
  char s1[80]="       Turbo  C       ",s2[80];
  strcpy(s2,tlb(s1));
  s2[ttb(s2)+1]='\0';
  printf("%s.\n",s2);
  return 0;
}
