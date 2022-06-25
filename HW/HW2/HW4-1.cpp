#include<stdio.h>
double *merge1(double *a,double *b,int n1,int n2,int *n3){
     double *c;
     int *s;
     s=new int [n1]{0};
     int same=0;
     for(int i=0;i<n1;i++)
         for(int j=0;j<n2;j++){
             if(a[i]==b[j]){
                 same++;
                 s[i]=1;
             
                 break;
             }
             else if(a[i]<b[j])
                 break;
         }
     (*n3)=n1+n2-same;
     int g=0;
     c=new double [(*n3)];
     for(int i=0;i<n1;i++){
         if(s[i])
             continue;
         c[g]=a[i];
         g++;
     }
     for(int i=0;i<n2;g++,i++){
         c[g]=b[i];
     }
     return c;
 }
 double *merge2(double *a,double *b,int n1,int n2){
     double *c=new double [n1+n2];
     int same=0;
     for(int i=0,j=0;i+j<n1+n2;)
        {
        	if(i<n1&&j<n2){
				if(a[i]<b[j]){
        			c[i+j-same]=a[i];
        			i++;
				}
				else if(a[i]>b[j]){
					c[i+j-same]=b[j];
					j++;
				}
				else if(a[i]==b[j]){
					c[i+j-same]=b[j];
					i++,j++,same++;
					
				}
			}
			else if(n1>n2){
				c[i+j-same]=a[i];
				i++;
			}
			else{
				c[i+j-same]=b[j];
				j++;
			}
				
        }
        
    for(int i=n1+n2-same;i<n1+n2;i++)
    	c[i]=0;
    return c;
 }
 
void sort (double *a,int n){
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
    double *a,*b,*c;
    int n1,n2,n3;
    while(printf("Please input the length of the first and second array: "),scanf("%d %d",&n1,&n2)!=EOF&&n1>0&&n2>0){
        a=new double [n1];
        b=new double [n2];
        printf("Please input the value in the first array!\n");
        for(int i=0;i<n1;i++)
            scanf("%lf",&a[i]);
        printf("Please input the value in the second array!\n");
        for(int i=0;i<n2;i++)
            scanf("%lf",&b[i]);
        sort(a,n1);
        sort(b,n2);
        c=merge1(a,b,n1,n2,&n3);
        
        /*c=merge2(a,b,n1,n2);
        for(int i=0;i<n1+n2;i++){
            if(c[i])
				printf("%lf  ",c[i]);
			}
        printf("\n\n");
        */
        sort(c,n3);
        for(int i=0;i<n3;i++)
            printf("%lf  ",c[i]);
        printf("\n\n");
    }
    return 0;
}
