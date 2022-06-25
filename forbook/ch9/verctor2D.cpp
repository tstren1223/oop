#include<iostream>
#include<vector>
#include<iomanip>//for setw()
using namespace std;
int main(){
    vector<int>v(5);
    vector<vector<int>>v2(8,v);//each element of v2 is a vector V
    int k=0;

    for(int i=0;i<8;i++)
        for(int j=0;j<5;j++)
            v2[i][j]=k++;

    cout<<"v2 display:\n";
    for(int i=0;i<8;i++){
        for(int j=0;j<5;j++)
            cout<<setw(3)<<v2[i][j]<<' ';
        cout<<'\n';
    }
    cout<<"\n\n";

    cout<<"v3 display:\n";

    vector<vector<int>>v3(8,vector<int>(5));

    for(int i=0;i<8;i++)
        for(int j=0;j<5;j++)
            v3[i][j]=k++;
    for(int i=0;i<8;i++){
        for(int j=0;j<5;j++)
            cout<<setw(3)<<v3[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
