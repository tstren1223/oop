#include<iostream>
#include<vector>
using namespace std;

vector<double> merge1(vector<double> &a,vector<double> &b,int n1,int n2){
     vector<double> c;
     int *s;
     s=new int [n1]{0};
     int same=0;
     for(int i=0;i<n1;i++)
         for(int j=0;j<n2;j++){
             if(a[i]==b[j]){
                 s[i]=1;
             
                 break;
             }
             else if(a[i]<b[j])
                 break;
         }
     for(int i=0;i<n1;i++){
         if(s[i])
             continue;
         c.push_back(a[i]);
     }
     for(int i=0;i<n2;i++){
    	 c.push_back(b[i]);
     }
     return c;
 }
vector<double> merge2(vector<double> &a,vector<double> &b,int n1,int n2){
     vector<double> c;
     for(int i=0,j=0;i+j<n1+n2;)
        {
        	if(i<n1&&j<n2){
				if(a[i]<b[j]){
        			c.push_back(a[i]);
        			i++;
				}
				else if(a[i]>b[j]){
					c.push_back(b[j]);
					j++;
				}
				else if(a[i]==b[j]){
					c.push_back(b[j]);
					i++,j++;
					
				}
			}
			else if(n1>n2){
				c.push_back(a[i]);
				i++;
			}
			else{
				c.push_back(b[j]);
				j++;
			}
				
        }
        
    return c;
 }

void sort (vector<double> &a,int n){
    double s;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                s=a[j];
                a[j]=a[i];
                a[i]=s;
            }
        }
}

int main(){
	vector<double> a,b,c;
    int n1,n2;
    double x;
    while(cout<<"Please input the length of the first and second array: ",cin>>n1>>n2&&n1>0&&n2>0){
        cout<<"Please input the value in the first array!\n";
        for(int i=0;i<n1;i++){
            cin>>x;
			if(a.size()<i+1)
				a.push_back(x);
			else
				a[i]=x;
		}
        cout<<"Please input the value in the second array!\n";
        for(int i=0;i<n2;i++){
        	cin>>x;
        	if(b.size()<i+1)
  		      	b.push_back(x);
  		    else
  		    	b[i]=x;
		}
        sort(a,n1);
        sort(b,n2);
        c=merge1(a,b,n1,n2);
        
        //c=merge2(a,b,n1,n2);
        sort(c,int(c.size()));
        for(int i=0;i<c.size();i++)
            cout<<c[i]<<"\t";
        cout<<"\n\n";
    }
    return 0;
    return 0;
}
