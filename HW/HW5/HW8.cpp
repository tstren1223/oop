#include<stdio.h>
#include<string.h>
char* tran(char *a){
  char *c=new char[41];
  char *t1;
  int blankn=0,cn=0,bn;
  for(int i=0;i<40;i++){
    if(a[i]!=' '){
      c[cn]=a[i];
      cn++;
      blankn=0;
    }
    else if(!blankn){
      c[cn]=a[i];
      cn++;
      blankn=1;
    }
  }
  c[strlen(c)-1]='\0';
  //process additional blanks
 bn=40-strlen(c);
  int j=0;cn=0;
  for(int i=0;i<bn;i++){
    if(j==strlen(c)-1){
      j=0;
      cn++;
    }
    for(;j<strlen(c);j++){
      if(c[j]==' '){
        for(int r=38;r>j;r--)
          c[r+1]=c[r];
        c[j+1+cn]=' ';
        j+=2+cn;
        break;
      }
    }
  }
  return c;
}
int main(){
  char a[41];
  while(printf("Please input a string:\n"),scanf(" %[^\n]",a)!=EOF){
    printf("After changing:\n%s\n",tran(a));
  }
  return 0;
}
