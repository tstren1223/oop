#include<stdio.h>
#include<string.h>
char* bina(char *a,char *b){
  char *c;
  int n1,n2,i,ca=0;
  n1=strlen(a);
  n2=strlen(b);
  int max=(n1>n2)?n1:n2;
  int dif=n1-n2;
  if(dif<0)
    dif*=-1;
  char *d=new char[max+1];//process adding
  for(i=0;i<n1+n2-max;i++){
    if(n1>n2)
      d[i+dif]=(char)((int)a[i+dif]+(int)b[i]-48); 
    else
      d[i+dif]=(char)((int)a[i]+(int)b[i+dif]-48);
  }
  for(;i<max;i++){
    d[max-i-1]=((n1>n2)?a[max-i-1]:b[max-i-1]);
  }
  d[i]='\0';
  i-=1;
  //process carry
  for(;i>=0;i--){
    d[i]=(char)((int)(d[i])+ca);
    ca=((int)(d[i]-48)/2);
    d[i]=(char)((int)(d[i]-48)%2+48);
  }
  if(ca){
    c=new char[max+2];
    c[0]='1';
    strcpy(&c[1],d);
    return c;
  }
  else
    return d;
}
int main(){
  char a[100],b[100];
  while(printf("Please input two numbers!\n"),(scanf("%s",a)!=EOF)&&(scanf("%s",b)!=EOF)){
    printf("The result is %s\n",bina(a,b));
  }
  return 0;
}
