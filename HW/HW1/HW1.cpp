#include<stdio.h>
int main(){
	int **a,**b;
	int len,wid;
	printf("Please input a lenghth and width of a matrix!\n");
	while(scanf("%d%d",&len,&wid)!=EOF){ 
		a= new int *[len];
		b= new int *[len];
		int fir=0,end=0;;
		for(int i=0;i<len;i++){
			a[i]=new int [wid];
			b[i]=new int [wid];
		}
			
		printf("Please input 0 or 1 in the matrix!\n");
		for(int i=0;i<len;i++)
			for(int j=0;j<wid;j++){
				scanf("%d",&a[i][j]);
				if(fir==0&&a[i][j]){
					if(i>0)
						fir=i;
					else
						fir=1;
				}
				if(a[i][j]){
					if(i<len-1)
						end=i;
					else
						end=len-2;
				}
				b[i][j]=a[i][j];
			}
		for(int i=fir;i<=end;i++)
			for(int j=1;j<wid-1;j++){
				if(a[i-1][j]&&a[i][j-1]&&a[i][j+1]&&a[i+1][j])//判斷上下左右是不是1 
					b[i][j]=0;
			}
	
			
		printf("\nThe result is as follows:\n");
		for(int i=0;i<len;i++){
			for(int j=0;j<wid;j++)
				printf("%d ",b[i][j]);
			printf("\n");
			}
		for(int i=0;i<wid;i++){
			delete []a[wid];
			delete []b[wid];
		}
		delete []a;
		delete []b;
		printf("\nPlease input a lenghth and width of a matrix!\n");
	} 
	return 0;
}
