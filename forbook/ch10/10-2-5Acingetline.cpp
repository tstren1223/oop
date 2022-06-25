#include<iostream>
#define str_size 10
using namespace std;
int main(){
  char ch[str_size];
  char s1[str_size];
  char s2[str_size];
  char s3[str_size];
  cout<<"Enter s1: ";
  cin.getline(s1,str_size);//12345
  cout<<"Enter s2: ";
  cin.getline(s2,5);//12345678
  cout<<"Enter s3: ";
  cin.getline(s3,str_size);
  cout<<"\ns1: "<<s1<<endl;//12345
  cout<<"s2: "<<s2<<endl;//1234
  cout<<"s3: "<<s3<<endl;
  cout<<"cin.rdstate()="<<cin.rdstate()<<endl;
  cin.clear();
  cin.ignore(5,'\n'); //cin.ignore(6);//cin.getline(ch,10);//from 5678 \r get 5 characters
  cout<<"cin.rdstate()="<<cin.rdstate()<<endl;
  cout<<"Enter s3: ";
  cin.getline(s3,str_size);
  cout<<"s3: "<<s3<<endl;
  return 0;
}
