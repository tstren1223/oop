#include<iostream>
using namespace std;
#define M 3
#define N 5
void input(int data[M][N])//int data[][N] also ok
{
    int i,j;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            data[i][j]=1;
}
void display(int data[][N]){
    int i,j;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++)
            cout<<data[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int ad[M][N];
    input(ad);
    display(ad);
    return 0;
}
