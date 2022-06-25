#include<stdio.h>
#include<string.h>
int main(){
  FILE *a,*b;
  a=fopen("HW1.cpp","r+");
  if((b=fopen("HW1.cpp","w"))==NULL){
    printf("Wrong");
  }
  //fprintf(b,"DOyou?");
  fprintf(a,"ILOVEEEEEEEEE");
  fprintf(b,"DOyou?");
  fclose(a);
  fclose(b);
  //the order of the close would change the result!
}
