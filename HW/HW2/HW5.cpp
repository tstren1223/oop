#include<stdio.h>
#define p 100
void sort(int a[p],int n){
    int tmp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
}

int main(){
    int a[p],b[p];
    int x,k=0,i=-1;
    printf("Please input the scores: ");
    while(scanf("%d",&x),x!=-999){
        i++;
        a[i]=x;
    }
    sort(a,i);
    x=1;
    for(int j=0;j<=i;j++){
        if(a[j]==a[j+1]&&j!=i){
            x++;
            continue;
        }
        else if(j==i){
            b[k]=x;
            printf("%d has the number of %d\n",a[j],b[k]);

        }
        else{
            b[k]=x;
            x=1;
            k++;
            printf("%d has the number of %d\n",a[j],b[k-1]);
        }
    }
    return 0;
}
