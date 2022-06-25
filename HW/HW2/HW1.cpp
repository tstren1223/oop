#include<stdio.h>
int tab1(int *v,int*wn,int***tab,int w,int n){
    if(w<wn[n]){
        tab1(v,wn,tab,w,n-1);
    }
    else if((*tab)[n][w])
        return (*tab)[n][w];
    else if(n){
        int a,b;
        a=v[n]+tab1(v,wn,tab,w-wn[n],n-1);
        b=tab1(v,wn,tab,w,n-1);
        if(a>b){
            (*tab)[n][w]=a;
            return a;
        }
        (*tab)[n][w]=b;
        return b;
    }
    else
        return 0;
}
void knap2(int *v,int *wn,int w,int n){
    int su=w;
    int max;
    int **tab;
    tab=new int *[n+1];
    for(int i=0;i<=n;i++)
        tab[i]=new int [w+1]{0};
    max=tab1(v,wn,&tab,w,n);
    printf("The max value is %d, and we need to use ",max);
    for(int i=n;i>=1;i--){
            if(tab[i][su]>tab[i-1][su]){
                printf("%dth item  ",i);
                su-=wn[i];
            }
        }
    printf("\n\n");
    
}

int main(){
    int w,n;
    int *v;
    int *wn;
    while(printf("Please input the number of selection!(n>0)\n"),scanf("%d",&n)!=EOF&&n>0){
         
         v=new int [n+1];
         wn=new int [n+1];
         printf("Please input the value and weight needed in each nth selection!(v>0,w>0)\n");
         for(int i=1;i<=n;i++){
             printf("input the value in %dth selection.\n",i);
             do{
                 scanf("%d",&v[i]);
                 scanf("%d",&wn[i]);
             }while(v[i]<=0||wn[i]<=0);
         }
         do{
             printf("Please input the total weight capacity!(w>=0)\n");
             scanf("%d",&w);
         }while(w<0);
         knap2(v,wn,w,n);
    }

    return 0;
}
