#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int>v(32,0);
    while(cout<<"Please input an integer n>0: ",cin>>n&&n>0){
      vector<int>v2(v);
      int x=n; 
      cout<<"1's of "<<n<<" are in positions: ";
      for(int i=0;x;i++){
        v2[i]=x%2;
        if(x%2){
            cout<<i<<"\t";
        }
        x/=2;
      }

      cout<<"\n\n";
    }
}
