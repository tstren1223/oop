#include<stdio.h>
#include<string.h>
int main(){
  char s[11]="0123456789";
  for(int i=0;i<strlen(s);i++){
    for(int j=0;j<strlen(s);j++){
      printf("%c",s[(i+j)%strlen(s)]);
    }
    printf("\n");
  }
  return 0;
}
