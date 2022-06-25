#include<stdio.h>
#include<stdlib.h>
struct queue{
  int data;
  queue*next;
};
void Push(queue**head,queue**tail,int num){
 queue *k=(queue*)malloc(sizeof(queue));
 k->data=num;
 k->next=NULL;
 if(*head==NULL)
   *head=k;
 if(*tail!=NULL)
   (*tail)->next=k;
 (*tail)=k;
}
void Display(queue*p){
  while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}
queue* finmin(queue*p){
  queue *k=p;
  while(p!=NULL){
    if(k->data>p->data)
      k=p;
    p=p->next;
  }
  return k;
}
void deleteneg(queue**h,queue**tail){
  queue*p=*h;
  queue*k,*pre;
  while(p!=NULL){
    if(p->data<0){
      if(p==*h){
        *h=(*h)->next;
      }
      else{
        pre->next=p->next;
      }
      k=p;
      p=p->next;
      free(k);
    }
    else{
      pre=p;
      p=p->next;
    }
  }
  *tail=pre;
}
int main(){
  queue *head=NULL,*tail=NULL;
  int num;
  while(printf("Please input the number!\n"),scanf("%d",&num)!=EOF){
    Push(&head,&tail,num);
  }
  Display(head);
  printf("The min number :%d\n",finmin(head)->data);
  printf("After deleting:\n");
  deleteneg(&head,&tail);
  Display(head);
  return 0;
}
