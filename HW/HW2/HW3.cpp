#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n;
    srand(time(NULL));
    while(printf("Please input a number for n*n metrix: "),scanf("%d",&n)!=EOF){
        int **d;
        int sum=1;
        d=new int *[n];
        for(int i=0;i<n;i++)
            d[i]=new int [n]{0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j>=i)
                    d[i][j]=rand()%7-3;
                printf("%-3d",d[i][j]);
            }
            printf("\n\n");
        }
        for(int i=0;i<n;i++)
            sum*=d[i][i];
        printf("The product of the main diagonal is %d.\n",sum);
    }
    return 0;
}
