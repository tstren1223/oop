#include<stdio.h>
#include<string.h>
int main(){
  char s1[10]="abc";//��10��pointer!�B�������w�nsize�F 
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
  char*s6=new char[6];//��s6���@��pointer
  s6="Hello";
  char *s11[5]={"a","bb","cccc","ddd","eeeee"};//s11��5��pointer�b���V�ӧOpointers! 
  return 0;
}
