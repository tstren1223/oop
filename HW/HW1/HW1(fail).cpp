#include<stdio.h>//fail for the shape that consists of not horizontal top and bottom!
int main(){
	int **a,**b;
	int len,wid;
	printf("Please input a lenghth and width of a matrix!\n");
	while(scanf("%d%d",&len,&wid)!=EOF){ 
		a= new int *[len];
		b= new int *[len];
		int fir=0,end=0;;
		for(int i=0;i<len;i++)
			a[i]=new int [wid];
		for(int i=0;i<len;i++)
			b[i]=new int [wid];
			
		printf("Please input 0 or 1 in the matrix!\n");
		for(int i=0;i<len;i++)
			for(int j=0;j<wid;j++){
				scanf("%d",&a[i][j]);
				b[i][j]=a[i][j];
				if(fir==0&&a[i][j]){
					fir=i;
				}
				if(a[i][j]){
					end=i;
				}
			}
		int left=0,right=0;
		for(int i=0;i<len;i++)
			for(int j=0;j<wid;j++){
				if(i==fir){
					break;
				}
				else if(i==end){
					break;
				}
				if(left&&b[i][j]){
					right=j;
				}
				if(a[i][j]&&left==0){
					left=j;
				}
				if(j==wid-1){
					for(int l=left+1;l<right;l++)
						b[i][l]=0;
				}
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
