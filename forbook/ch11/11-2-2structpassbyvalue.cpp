#include<stdio.h>
struct node{
	int item1;
	int item2;
};
int add(node a){
	return (a.item1+a.item2);
}
int main(){
	int sum;
	node b={12,34};
	sum=add(b);
	printf("%d+%d=%d\n",b.item1,b.item2,sum);
	return 0;
}
