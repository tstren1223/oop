#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node* next;
};
int main(){
	node *head,*p,*tail;
	head=tail=(node*)malloc(sizeof(node));
	for(int i=0;i<10;i++){
		p=(node*)malloc(sizeof(node));
		p->data=5;
		p->next=NULL;
		tail->next=p;
		tail=p;
	}
	p=head;
	head=head->next;
	free(p);
	p=head;
	free(tail);//free then need to redir the tail-1 node.next!
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
