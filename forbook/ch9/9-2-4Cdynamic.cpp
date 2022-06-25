#include<iostream>
#include<iomanip>
using namespace std;
int **sub(int &r,int &c){
    int **p;
    cout<<"Please enter r and c:";
    cin>>r>>c;
    p=new int *[r];
    for(int i=0;i<r;i++)
        p[i]=new int[c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)//
            scanf("%d",&p[i][j]);
    cout<<"sub array 2-d array p"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<setw(3)<<p[i][j];
        cout<<endl;
    }
    cout<<endl;
    return p;//把p的值(即剛new的地址)回傳~! 
}
int main(){
    int **q;
    int row,col;
    q=sub(row,col);
    cout<<"back to main"<<endl;
    cout<<"mainarray 2-d array q"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            cout<<setw(3)<<q[i][j];
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
