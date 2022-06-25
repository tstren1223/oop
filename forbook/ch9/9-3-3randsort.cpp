#include<iostream>
#include<vector>
#include<algorithm>//for sort and random_shuffle
using namespace std;
int main(){
    vector<int> vint;//initiate a vector container
    cout<<"Number of object in vint = "<<vint.size();
    cout<<"\n***Pushing integers into vint***"<<endl;
    for(int i=0;i<9;i++)
        vint.push_back(i+1);
    cout<<"Number of objects in vint = "<<vint.size();
    cout<<"\nData in the vector:";
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;

    random_shuffle(vint.begin(),vint.end());
    cout<<"Data in the vector after shuffle: ";
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;

    cout<<"Data in the vector after sort: ";
    sort(vint.begin(),vint.end());
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;
    return 0;
    return 0;
}
