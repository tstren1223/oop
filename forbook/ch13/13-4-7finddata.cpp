#include<stdio.h>
#include<stdlib.h>
#include"1344.h"
int main(){
  int search(int,struct node *);
  int key,num;
  setup();
  printf("Your search key: ");
  scanf("%d",&key);
  if((num=search(key,head))!=0)
    printf("Found in node %d.\n",num);
  else
    printf("Not found in link list.\n");
  return 0;
}
int search(int key,node*p){
  int i=1;
  while(p!=NULL){
    if(key==p->data)
      break;
    else{
      i++;
      p=p->next;
    }
  }
  if(p==NULL)
    return 0;
  else
    return i;
}
