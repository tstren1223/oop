#include<stdio.h>
#include<stdlib.h>
struct Poly{
  int coe;
  int power;
  Poly*next;
};
void Push(Poly**head,Poly**tail,int coe,int power){
 if(coe){//process 0 result
  Poly *k=(Poly*)malloc(sizeof(Poly));
  k->coe=coe;
  k->power=power;
  k->next=NULL;
  if(*head==NULL)
    *head=k;
  if(*tail!=NULL)
    (*tail)->next=k;
  (*tail)=k;
 }
}
void Display(Poly*p){
  Poly *k=p;
  while(p!=NULL){
    if(p==k)
      printf("%dx^%d",p->coe,p->power);
    else if(p->power==1)
      printf("%+dx",p->coe);
    else if(p->power)
      printf("%+dx^%d",p->coe,p->power);
    else
      printf("%+d \n",p->coe);//process 0 power
    p=p->next;
  }
  printf("\n");
}
Poly* addorsub(Poly*a,Poly*b,int cho){
  Poly*ch=NULL,*ct=NULL,*k=NULL;
  while(a!=NULL&&b!=NULL){
    if(a->power>b->power){
      Push(&ch,&ct,a->coe,a->power);
      a=a->next;
    }
    else if(a->power==b->power){
      if(cho==1)
        Push(&ch,&ct,a->coe+b->coe,a->power);
      else if(cho==-1)
        Push(&ch,&ct,a->coe-b->coe,a->power);
      a=a->next;
      b=b->next;
    }
    else{
      Push(&ch,&ct,b->coe*cho,b->power);
      b=b->next;
    }
  }
  if(a!=NULL){
    k=a;
    cho=1;
  }
  if(b!=NULL){
    k=b;
    if(cho==-1)
      cho=-1;
  }
  while(k!=NULL){
    Push(&ch,&ct,k->coe*cho,k->power);
    k=k->next;
  }
  return ch;
}
int main(){
  Poly *head1=NULL,*tail1=NULL,*head2=NULL,*tail2=NULL;
  int coe,power,cho;
  while(printf("Please input the coeffiecients and power in first polymonial!\n"),scanf("%d%d",&coe,&power)!=EOF){
    Push(&head1,&tail1,coe,power);
  }
  while(printf("Please input the coeffiecients and power in second polymonial!\n"),scanf("%d%d",&coe,&power)!=EOF){
    Push(&head2,&tail2,coe,power);
  } 
  while(printf("Please to add orsubstract the two polynomials!1 for add -1 for sub\n"),scanf("%d",&cho)!=EOF){
   if(cho==1||cho==-1){
    printf("The result:\n");
    Display(addorsub(head1,head2,cho));
   }
  }
  return 0;
}
