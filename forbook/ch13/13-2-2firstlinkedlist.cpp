#include<stdio.h>
struct node{
  int data;
  struct node *next;
};
void display(struct node*p){
  int i=0;
  while(p!=NULL){
    i++;
    printf("Node %d: %d\n",i,p->data);
    p=p->next;
  }

}
int main(){
  struct node one,two,three;
  struct node*ptr;
  ptr=&one;
  one.data=11;
  one.next=&two;
  two.data=22;
  two.next=&three;
  three.data=33;
  three.next=NULL;
  display(ptr);
  return 0;
}
