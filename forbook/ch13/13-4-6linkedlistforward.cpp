#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  node*next;
};
int main(){
  struct node*head,*tail,*p;
  int i,n;
  printf("How many data node to create?");
  scanf("%d",&n);
  head=tail=(node*)malloc(sizeof(node));
  for(int i=1;i<=n;i++){
    p=(node*)malloc(sizeof(node));
    if(!p){
      printf("Out of memory.\n");
      break;
    }
    printf("Enter data in node %d: ",i);
    scanf("%d",&(p->data));
    p->next=NULL;//finishing creating node
    tail->next=p;//updating the tail;
    tail=p;//head next also update once//this is why we need dummy node
  }
  p=head;//let p point to the dummy node
  head=head->next;//let head point to the 1st node
  free(p);//deallocate the memory of the dummy node
  p=head;
  while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;
  }

}
