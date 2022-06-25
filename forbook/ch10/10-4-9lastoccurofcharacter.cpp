#include<stdio.h>
#include<string.h>
int main(){
  char *s="abcdeaijkawxyz";
  char *t,*t1;
  t=strrchr(s,(int)'a');
  t1=strchr(s,(int)'a');
  printf("t=%s\n",t);
  printf("t1=%s\n",t1);
  return 0;
}
