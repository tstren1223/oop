#include<stdio.h>
int main(){
    double *a,*b;
    int ma[2];
    int x;
    double min;
    while(printf("Please input the number of sets :"),scanf("%d",&x)!=EOF&&x){
        a=new double [x+1];
        b=new double [x+1];
        for(int i=1;i<=x;i++){
            scanf("%lf,%lf",&a[i],&b[i]);//x in a arra///y in b array
        }
        min=(a[1]-a[2])*(a[1]-a[2])+(b[1]-b[2])*(b[1]-b[2]);
        for(int i=1;i<=x-1;i++)
            for(int j=i+1;j<=x;j++)
            {
                if(min>=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])){
                    min=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);                
                    ma[0]=i;
                    ma[1]=j;
                }
            }
        printf("The cloest two points are (%lf,%lf),(%lf,%lf)\n",a[ma[0]],b[ma[0]],a[ma[1]],b[ma[1]]);
    }
    return 0;
}
