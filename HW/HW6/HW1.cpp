#include<stdio.h>
#include<stdlib.h>
struct Stack{
  int data;
  Stack*next;
};
void Push(Stack**p,int num){
 Stack *k=(Stack*)malloc(sizeof(Stack));
 k->data=num;
 k->next=*p;
 *p=k;
}
void Pop(Stack**p){
  Stack *k;
  if(*p!=NULL){
    k=*p;
    *p=(*p)->next;
    free(k);
  }
}
void Display(Stack*p){
  while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}
void showmenu(){
  printf("Main menu:\n");
  printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
}
int main(){
  Stack *head=NULL;
  int cho=1;
  int num;
  while(cho){
    showmenu();
    scanf("%d",&cho);
    switch(cho){
      case 1:
      printf("Please input the data you want to store!\n");
      scanf("%d",&num);
      Push(&head,num);
      break;
      case 2:
      Pop(&head);
      break;
      case 3:
      Display(head);
      break;
      case 4:
      cho=0;
      break;
    }
  }
  return 0;
}
