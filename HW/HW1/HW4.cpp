#include<stdio.h>

int main(){
    int r,**a;
    while(printf("Please enter a positive number \"r\": "),scanf("%d",&r)!=EOF){
        a=new int *[r];
        for(int i=0;i<r;i++){
            a[i]=new int [r];
        }
        printf("Please enter %d integers!\n",r);
        for(int i=0;i<r;i++){
                scanf("%d",&a[0][i]);
                a[i][0]=a[0][i];
                for(int j=1;j<r-i;j++){
                    a[j][i+j]=a[0][i];
                   if(i)
                       a[i+j][j]=a[i][0];
                }
            }
        for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
                printf("%-5d",a[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
