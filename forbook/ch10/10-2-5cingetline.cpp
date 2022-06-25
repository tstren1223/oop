#include<iostream>
#define Strsizea 10
using namespace std;
int main(){
  char s1[Strsizea];
  char s2[Strsizea];
  char s3[Strsizea];
  cout<<"Enter s1: ";
  cin.getline(s1,Strsizea);
  cout<<"Enter s2: ";
  cin.getline(s2,5);
  cout<<"Enter s3: ";
  cin.getline(s3,Strsizea);
  cout<<endl;
  cout<<"s1"<<s1<<endl;
  cout<<"s2"<<s2<<endl;
  cout<<"s3"<<s3<<endl;
  cin.clear();
  cin.ignore(5,'\n');//from ghijk \r get 5 characters
  //cin.getline(ch,6);
  cout<<"Enter s3: ";
  cin.getline(s3,Strsizea);
  cout<<"s3: "<<s3<<endl;
  return 0;
}
