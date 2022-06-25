#include<iostream>
using namespace std;
int main(){
  char s1[80];
  char *s2;
  s2=new char[80];
  cout<<"Enter 1st string:";
  cin>>s1;
  cout<<"Enter 2nd string:";
  cin>>s2;//gets(s2);
  cout<<"1st string:"<<s1<<endl;
  cout<<"2nd string:"<<s2<<endl;
  //puts(s2);
  delete []s2;
  return 0;
}
