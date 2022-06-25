#include<stdio.h>
#include<string.h>
char t1[80]="\0";
char *t2;
void delete_str(char**y,int po,int length){
  strncpy(t1,*y,po-1);
  t2=strchr(*y,*(*y+po-1+length));
  strcat(t1,t2);
  *y=t1;
}

int main(){
  char *s=new char[9];
  strcpy(s,"abxyzcde");
  printf("s = %s\n",s);
  delete_str(&s,3,3);
  printf("After deletion: ");
  printf("s = %s\n",s);
  return 0;
}
