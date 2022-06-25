#include<stdio.h>
#include<stdlib.h>
#include"1344.h"
void reverse(node*p){
  node*q=NULL,*r;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
  }
  head=q;
}
int main(){
  setup();
  reverse(head);
  printf("After reversing:\n");
  display(head);
  return 0;
}
