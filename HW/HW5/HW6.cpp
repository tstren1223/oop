#include<stdio.h>
#include<string.h>
char *ls(char *a){
  char *c=new char[2*strlen(a)+1];
  int n=1,c1=0;
  for(int i=0;i<strlen(a);i++){
    if((a[i]==a[i+1])&&i!=strlen(a)-1){
      n++;
    }
    else{
      if(n>=10){
      c[c1]=n/10+48;
      c[c1+1]=n%10+48;
      c[c1+2]=a[i];
      n=1;
      c1+=3;
      }
      else{
      c[c1]=n+48;
      c[c1+1]=a[i];
      n=1;
      c1+=2;
      }
    }
  }
  c[c1]='\0';
  return c;
}
int main(){
  char a[1000];
  int num;
  while(scanf("%d",&num)!=EOF){
    for(int i=0;i<num;i++){
      scanf("%s",a);
      printf("%s\n",ls(a));
    }
  }
  return 0;
}
