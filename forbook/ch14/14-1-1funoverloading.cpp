#include<iostream>
#include<string.h>
using namespace std;
int compare(char s1[],char s2[]){
  return strcmp(s1,s2);
}
int compare(int i1,int i2){
  return i1-i2;
}
int main(){
  if(!compare("Lion","Rabbit"))
    cout<<"Equal \n";
  else 
    cout<<"Not equal"<<endl;
  if(!compare(32,23+9))
    cout<<"Equal \n";
  else
    cout<<"Not Equal"<<endl;
  return 0;
}
