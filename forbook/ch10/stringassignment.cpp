#include<stdio.h>
#include<string.h>
int main(){
  char s1[10]="abc";//表10個pointer!且都有指定好size了 
  char s2[2][10]={"abc","acc"};
  char s3[10];
  strcpy(s3,"abc");
  //s3="abc";//error
  for(int i=0;i<10;i++){
    printf("%c",s1[i]);
  }
  for(int i=0;i<10;i++){
    printf("%c",s3[i]);
  }
  
  
  char s4[5]="abc";
  char s5[5];
  //s5=s4;//error;
  strcpy(s5,s4);
  char*s6=new char[6];//表s6為一個pointer
  s6="Hello";
  char *s11[5]={"a","bb","cccc","ddd","eeeee"};//s11表5個pointer在指向個別pointers! 
  return 0;
}
