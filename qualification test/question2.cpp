//the second question asks for the function named "range" to calculate the max-min and there is 9 double type data!
#include<stdio.h>
double ar[9]={2.3,3.4,6.7,8.9,45.6,78.5,6.44,3.22,1.45};
double range(double *ar,int n){
	double max,min;
	max=ar[0];min=ar[0];
	for(int i=1;i<n;i++)
		if(max<ar[i])
			max=ar[i];
	for(int i=1;i<n;i++)
		if(min>ar[i])
			min=ar[i];
	return max-min;
}
int main(){
	printf("the range of ar is  %lf.",range(ar,9));
	return 0;
}
