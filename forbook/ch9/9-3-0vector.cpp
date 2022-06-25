#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double> vd1,vd2(5,1),vd3(7);
    int s,i;
    double x;
    cout<<"vd1's size is "<<vd1.size()<<endl;
    cout<<"vd2's size is '"<<vd2.size()<<endl;
    cout<<"vd3's size is '"<<vd3.size()<<endl;
    cout<<"\nPlease enter vd1's size:";
    cin>>s;
    cout<<"Please enter data to store in vd1:";
    for(i=0;i<s;i++){
        cin>>x;
        vd1.push_back(x);
    }
    cout<<"The program enters two more data to store in vd1:";
    vd1.push_back(100);
    vd1.push_back(200);



    cout<<"\nvd1's size is "<<vd1.size()<<endl;
    cout<<"\nThe data stored in vd1 are: ";
    for(i=0;i<vd1.size();i++)
        cout<<vd1[i]<<"\t";
    cout<<endl;

    cout<<"\nThe data stored in vd2 are: ";
    for(i=0;i<vd2.size();i++)
        cout<<vd2[i]<<" ";
    cout<<endl;
    cout<<"\nThe program enters 5 more data to vd1:";
    for(i=0;i<5;i++)
        vd2.push_back(300);

    cout<<"\nThe data stored in vd2 are: ";
    for(i=0;i<vd2.size();i++)
        cout<<vd2[i]<<" ";
    cout<<endl;

    cout<<"\nPlease enter 7 data to store in vd3: ";
    for(i=0;i<vd3.size();i++)
        cin>>vd3[i];

    cout<<"\nThe data stored in vd3 are:";
    for(i=0;i<vd3.size();i++)
        cout<<vd3[i]<<"\t";
    cout<<endl;

    return 0;
}
