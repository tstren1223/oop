//the first question asks for the number of even number and average of the sum
//input is integer
#include<stdio.h>
int main(){
	long long num,n1=0,n2=0;
	long long sum=0;
	while(scanf("%lld",&num)!=EOF){
		if(num%2==0)
			n1++;
		sum+=num;
		n2++;
	}
	printf("the number of even number is %lld and the average is %lf.",n1,sum*1./n2);//要轉型不可用%lf+兩個代數為非double 
	return 0;
}
