#include<stdio.h>
#define max_n 20
int main(){
    int x[max_n][max_n]={0};
    int i,j,k,n;
    do{
        printf("Enter odd array size(3-19):");
        scanf("%d",&n);
    }while((n>19)||(!(n%2))||(n<3));
    //fill zero into array
    /*
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            x[i][j]=0;
       */
    //rule 1;
    i=0;
    j=(n-1)/2;//not (n+1)/2 because the array number starts from 0,so the target need-1 form middle number for n!
    x[i][j]=1;
    for(k=2;k<=n*n;k++){
        i--;j++;//rule2
        if((i<0)&&(j>n-1))//rule 5
        {
            i=1;
            j=n-1;
        }
        else if(i<0)//rule 3
            i=n-1;
        else if(j>(n-1))//rule 4
            j=0;
        else//in the normal range
            if(x[i][j])//rule 6
            {
                i+=2;
                j--;
            }
        x[i][j]=k;

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%4d",x[i][j]);
        printf("\n");
    }
    return 0;
}
