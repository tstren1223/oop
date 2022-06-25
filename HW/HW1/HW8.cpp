#include<stdio.h>
//the sieve of Eratosthenes
//important task!
int main(){
    int n;
    long long *a;

    while(printf("Please input an integer>=2: "),scanf("%d",&n)!=EOF){
    	a=new long long [n-1];
    	for(int i=2;i<=n;i++){
    	    a[i-2]=i;//¸õ¹L0 and 1
    	}
    	int p;
    	printf("all of the prime numbers < %d are :\n",n);
    	for(long long i=2;i<=n;i++){
       		if(!a[i-2])
            	continue;
        	for(long long l=i*i;l<=n;l++){
            	a[l-2]&&a[l-2]%i==0?a[l-2]=0:0;//§R°£multipls
        	}
        	printf("%-10lld",a[i-2]);
    	}
    
    	printf("\n");

   		delete []a;
    }
    return 0;
}
