#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vint;//initiate a vector container
    cout<<"Number of objects in vint = "<<vint.size();
    cout<<"\n***Pushing integers into vint***"<<endl;
    for(int i=0;i<5;i++)
        vint.push_back(i);//push an int to the container
    cout<<"Number of objects in vint = "<<vint.size()<<endl;
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<"\n***insert data into vint***"<<endl;
    vint.insert(vint.end(),5);//5 as the last element
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;
    vint.insert(vint.end()-1,6);//insert 6 @ end()-1
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;
    vint.insert(vint.end()-2,7);//insert 7 @ end()-2
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<endl;
    return 0;
}
