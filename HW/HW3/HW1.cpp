#include<iostream>
#include<iomanip>
using namespace std;
struct reco{
  char name[21];
  char id[8];
  int chinese;
  int english;
  int math;
  int total;
};
void in(reco &a){
  cout<<"Please input the name,id,chinese,english,math"<<endl;
  cin.get();
  cin.getline(a.name,21);
  cin.getline(a.id,8);
  cin>>a.chinese>>a.english>>a.math;
  a.total=a.chinese+a.english+a.math;
}
void sort(reco a[],int n){
  reco tmp;
  for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++){
      if(a[i].total>a[j].total){
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
      else if(a[i].total==a[j].total){
        if(a[i].chinese>a[j].chinese){
          tmp=a[i];
          a[i]=a[j];
          a[j]=tmp;
        }
        else if(a[i].chinese==a[j].chinese){
          if(a[i].english>a[j].english){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
          }
          else if(a[i].english==a[j].english){
            if(a[i].math>a[j].math){
              tmp=a[i];
              a[i]=a[j];
              a[j]=tmp;
            }
            else if(a[i].math==a[j].math){
              for(int k=0;k<7;k++){
                if(a[i].id[k]>a[j].id[k]){
                  tmp=a[i];
                  a[i]=a[j];
                  a[j]=tmp;
                }
              }
            }
          }
        }
      }
    }
}
int main(){
  reco *b;
  int n;
  while(cout<<"Please input the number of record you will type!\n",cin>>n&&n>0){
    b=new reco[n];
    for(int i=0;i<n;i++)
      in(b[i]);
    sort(b,n);
    cout<<"Name                   Id      chinese  english  math  total\n";
    for(int i=0;i<n;i++)
    cout<<left<<setw(20)<<b[i].name<<setw(10)<<left<<b[i].id<<setw(6)<<right<<b[i].chinese<<setw(9)<<right<<b[i].english<<setw(7)<<right<<b[i].math<<setw(6)<<b[i].total<<endl;
    delete []b;
  }
  return 0;
}
