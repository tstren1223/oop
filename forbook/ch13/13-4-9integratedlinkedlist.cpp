#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  node*next;
};
node*head,*scan,*pred,*p;
void generate(){
  p=(node*)malloc(sizeof(node));
  printf("Enter a number: ");
  scanf("%d",&(p->data));
  p->next=NULL;
}
void search1(node*s,int key){
  //to insert
  while(s!=NULL){
    if(key<s->data)
      break;
    else{
      pred=s;
      s=s->next;
    }
  }
  scan=s;
}
void search2(node*s,int key){
  //search for key num
  while(s!=NULL){
    if(key==s->data)
      break;
    else{
      pred=s;
      s=s->next;
    }
  }
  scan=s;
}
void insert(int key){
  search1(head,key);
  if(scan==head){
    p->next=head;//p->next=scan;
    head=p;
  }
  else{
    p->next=scan;
    pred->next=p;
  }
}
void deletenode(int key){
  node*t;
  search2(head,key);
  if(scan==NULL){
    printf("Cannot delete.\n");
  }
  else if(scan==head){
    t=head;//t=scan
    head=head->next;
    free(t);
  }
  else{
    t=scan;
    pred->next=scan->next;
    free(t);
  }
}
void display(node* p){
  while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}
void displaymenu(){
  printf("Main menu\n");
  printf("1.insert\n");
  printf("2.Delete\n");
  printf("3.Display\n");
  printf("4.exit\n");
  printf("Your selection: ");
}
int main(){
  int k,cont=1;
  char sw;
  head=scan=pred=NULL;
  while(cont){
    displaymenu();
    scanf(" %c",&sw);
    switch(sw){
      case '1':
        generate();
        insert(p->data);
        break;
      case '2':
        printf("Enter the item to be deleted: ");
        scanf("%d",&k);
        deletenode(k);
        break;
      case '3':
        display(head);
        break;
      default :
        cont=0;
        break;

    }
  }
  return 0;
}
