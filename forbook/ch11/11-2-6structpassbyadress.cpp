#include<stdio.h>
struct node{
	int item1;
	int item2;
};
void sub(node *a){
	a->item1=56;
	(*a).item2=78;
}
int main(){
	node b;
	b.item1=12;
	b.item2=34;
	sub(&b);
	printf("datanode.item1 =%d\n",b.item1);
	printf("datanode.item2 =%d\n",b.item2);
	return 0;
}
