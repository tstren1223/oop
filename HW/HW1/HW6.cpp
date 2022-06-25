#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binsrch(int *a,int n,int v){
    int first=0,last=n-1;
    int mid;
    int found=-1;

    while(found==-1&&first<=last){
        mid=(first+last)/2;
        //printf("%d\n",mid);
        if(a[mid]==v){
            found=mid;
        }
        else if(a[mid]<v){
            first=mid+1;
        }
        else
            last=mid-1;
    }
    return found;//直接傳回地址or-1 
}

void sort (int*a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]){
                int tmp;
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
    }
}

int main(){
    
    int num=0;
    int a[150];
    int use[201],ran;
    srand(time(NULL));

    
    for(int i=0;i<150;i++){
       /* do{
            ran=rand()%200+1;
        }while(use[ran]==1);
        use[ran]=1;
        a[i]=ran;*/
        a[i]=rand()%200+1;
    
    }

    sort(a,150);
    printf("The sort has been done.\n");
    //for(int i=0;i<150;i++)
            //printf("%-5d",a[i]);
    printf("\n");
    for(int i=0;i<200;i++){
        if(binsrch(a,150,rand()%200+1)!=-1)
            num++;
    }

    printf("The number of successful searches is: %d\nThe percentage of the successful searches is : %lf\n",num,num/200.0);
        
    return 0;
}
