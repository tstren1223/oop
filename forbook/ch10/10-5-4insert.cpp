#include<string.h>
#include<stdio.h>
char t1[80]="\0";
char *t2="\0";
void insert(char*x,char**y,int n){
  strncpy(t1,*y,n-1);
  t2=strchr(*y,*(*y+n-1));
  strcat(t1,x);
  strcat(t1,t2);
  *y=t1;
}
int main(){
  char *s1="abcde";
  char *s2="xyz";
  printf("s1=%s\n",s1);
  printf("s2=%s\n",s2);
  insert(s2,&s1,3);
  printf("After insertion: ");
  printf("s1=%s\n",s1);
  return 0;
}
