#include<iostream>
using namespace std;
int main(int argc,char *argv[]){
  int i,key;
  cout<<"number of arguments is "<<argc<<endl;
  for(i=0;i<argc;i++)
    cout<<"argc num="<<i<<":"<<argv[i]<<endl;
  return 0;
}

