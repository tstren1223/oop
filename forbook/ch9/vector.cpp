#include<iostream>
#include<vector>
using namespace std;
void sub(vector<double> &v){//reference is the alias!so this local variable v is
    int s;double x;
    cin>>s;
    cout<<"Please enter data to store in vd1:";
    for(int i=0;i<s;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<s;i++)
        cout<<v[i]<<endl;
    cout<<endl;
}

void sub1(vector<double>*v){
    int s;double x;
    cout<<"\nPlease enter vd1's more size:";
    cin>>s;
    cout<<"Please enter data to store in vd1:";
    for(int i=0;i<s;i++)
    {
        cin>>x;
        v->push_back(x);//the same as (*v).push_back(x);but C++provide a way looking better that is v->push_back(x);
    }
    cout<<v->size()<<endl;
    for(int i=0;i<v->size();i++){
        cout<<v->at(i)<<endl;
        //same as cout<<v->operator[](i)<<endl;
}
cout<<endl;
}

int main(){
    vector<double>vd1;
    int i,s;double x;
    cout<<"vd1's size is "<<vd1.size()<<endl;
    cout<<"\nPlease enter vd1's size:";
    sub(vd1);
    for(i=0;i<vd1.size();i++)
        cout<<vd1[i]<<"\t";
    cout<<endl;
    sub1(&vd1);
    for(i=0;i<vd1.size();i++)
        cout<<vd1[i]<<"\t";
    cout<<endl;
    return 0;
}
