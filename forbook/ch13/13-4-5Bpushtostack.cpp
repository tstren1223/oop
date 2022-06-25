#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  node*next;
};
void Push(node**h,int d){
  node*p=(node*)malloc(sizeof(node));
  p->data=d;
  p->next=*h;
  *h=p;//change the center of "head" in main()
}
int main(){
  node*head=NULL,*p;
  Push(&head,20);
  Push(&head,30);
  Push(&head,40);
  p=head;
  while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;
  }
  return 0;
}
