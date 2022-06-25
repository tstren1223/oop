#include<stdio.h>
#include<string.h>
char *btod(char*a){
  char *c;
  int sum=0,b=1,n1=0;
  for(int i=strlen(a)-1;i>=0;i--){
    sum+=b*(a[i]-48);
    b*=2;
  }
  b=1;
  while(sum/b){
  b*=10;
  n1++;
  }
  b/=10;
  c=new char[n1+1];
  for(int i=0;i<n1;i++){
    c[i]=(sum/b)+48;
    sum%=b;
    b/=10;
  }
  c[n1]='\0';
  return c;
}
int main(){
  char a[100];
  while(printf("Please input the binary number.\n"),scanf("%s",a)!=EOF){
    printf("The result is %s.\n",btod(a));
  }
  return 0;
}
