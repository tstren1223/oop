#include<stdio.h>
void input2darray(double ***x,int r,int c){
    *x=new double *[r];//*x=m
    printf("new array of pointer ");
    for(int i=0;i<r;i++)
        (*x)[i]=new double [c];//m的值
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%lf",&(*x)[i][j]);
    printf("complete input\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%lf",(*x)[i][j]);
        printf("\n");
    }
    printf("\nExit from input1darray_v1\n\n");
}
int main(){
    double **m;
    int r,c;
    printf("Please enter r and c:");
    scanf("%d%d",&r,&c);
    input2darray(&m,r,c);//call by adress
    printf("\nBack to main\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%lf",m[i][j]);
        printf("\n");
    }
    return 0;
}
