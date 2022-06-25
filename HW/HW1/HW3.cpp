#include<stdio.h>
int main(){
	int **a;
	int r,c;
	printf("Please input r and c of rxc matrix!\n");
	while(scanf("%d%d",&r,&c)!=EOF){
		printf("Please input values of rxc matrix!\n");
		long long sum=0,sumr=0,sumc=0;
		a=new int *[r];
		for(int i=0;i<r;i++)
			a[i]=new int [c];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&a[i][j]);
				sum+=a[i][j];
			}
		}
		printf("The sum of all elements is %lld\n",sum);
		for(int i=0;i<r;i++){
			sumr=0;
			for(int j=0;j<c;j++){
				sumr+=a[i][j];
			}
			printf("The sum of %dth row is %lld\n",i+1,sumr);
		}
		for(int j=0;j<c;j++){
			sumc=0;
			for(int i=0;i<r;i++){
				sumc+=a[i][j];
			}
			printf("The sum of %dth column is %lld\n",j+1,sumc);
		}
		for(int i=0;i<c;i++)
			delete []a[i];
		delete []a;
	printf("Please input r and c of rxc matrix!\n");
	}
	return 0;
}
