#include<stdio.h>
struct node{
  int data;
  node*next;
};
void sub(node*x){
  x->data=33;
  x=x->next;
  x->data=44;
}
int main(){
  node one,two,*h;
  h=&one;
  one.data=11;
  one.next=&two;
  two.data=22;
  two.next=&one;//circular linked list
  sub(h);
  printf("h->data = %d\n",h->data);
  printf("h->next->data=%d\n",h->next->data);
  return 0;
}
