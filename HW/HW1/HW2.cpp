#include<stdio.h>
int main(){
	int **a,**b,**c;
	int wid,len,wid2;
	printf("Please input m and n of the first matrix!\n");
	while(scanf("%d%d",&len,&wid)){
		a=new int *[len];
		for(int i=0;i<len;i++)
			a[i]=new int [wid];
		printf("Please input another n of the second matrix!\n");
		scanf("%d",&wid2);
		b=new int *[wid];
		for(int i=0;i<wid;i++)
			b[i]=new int [wid2];
		printf("Please input the values in the first matrix\n");
		for(int i=0;i<len;i++)
			for(int j=0;j<wid;j++)
				scanf("%d",&a[i][j]);
		printf("Please input the values in the second matrix\n");
		for(int i=0;i<wid;i++)
			for(int j=0;j<wid2;j++)
				scanf("%d",&b[i][j]);
		c=new int *[len];
		for(int i=0;i<len;i++)
			c[i]=new int [wid2];
		for(int i=0;i<len;i++)
			for(int j=0;j<wid2;j++){
				int sum=0;
				for(int k=0;k<wid;k++)
					sum+=a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		for(int i=0;i<len;i++){
			for(int j=0;j<wid2;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}
		for(int i=0;i<wid;i++)
			delete []a[i];
		for(int i=0;i<wid2;i++){
			delete []b[i];
			delete []c[i];
		}
		delete []a;
		delete []b;
		delete []c;
		printf("\nPlease input m and n of the first matrix!\n");
	}
	return 0;
}
