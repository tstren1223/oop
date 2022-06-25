struct node*buildonetwothreeB(){
  dtruct node*head;
  head=malloc(sizeof(struct node));
  head->data=1;
  head->next=malloc(sizeof(node));
  head->next->data=2;
  head->next->next=malloc(sizeof(node));
  head->next->next->data=3;
  head->next->next->next=NULL;
  return head;
}
