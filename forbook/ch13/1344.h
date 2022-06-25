struct node{
  int data;
  node*next;
};
node*head;//global pointer
void display(node*p){
  if(p!=NULL){
    printf("%d\n",p->data);
    display(p->next);
  }
}
void setup(){
  node *p;
  int i,n;
  printf("How many data nodes to create?");
  scanf(" %d",&n);
  head=NULL;
  for(int i=1;i<=n;i++){
    p=(struct node*)malloc(sizeof(node));
    if(!p){
      printf("out of memory.\n");
      break;
    }
    printf("Enter data of node %d: ",i);
    scanf(" %d",&(p->data));
    p->next=head;
    head=p;//update head
  }
  display(head);
}
