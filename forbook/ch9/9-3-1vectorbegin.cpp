#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vint;//initiate a vector container
    cout<<"Number of objects in vint = "<<vint.size();
    cout<<"\n**Pushing integers into vint**"<<endl;
    for(int i=0;i<5;i++)
        vint.push_back(i);//push an int to the container
    cout<<"Number of objects in vint = "<<vint.size()<<endl;
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<' ';
    cout<<"\n**Deleting an object from vint**"<<endl;
    vint.erase(vint.begin());//delete 1st element
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<"  ";
    cout<<endl;
    vint.erase(vint.begin()+1);
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<"  ";
    cout<<endl;
    vint.erase(vint.begin()+2);
    for(int j=0;j<vint.size();j++)
        cout<<vint[j]<<"  ";
    cout<<endl;
    return 0;
}
