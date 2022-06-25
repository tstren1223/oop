#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum suit{clubs,diamonds,hearts,spades};
struct Card{
  suit cardsuit;
  unsigned int value;
};
void shuffle(Card a[52]){
  Card tmp;
  int ran;
  for(int i=0;i<52;i++){
    ran=rand()%52+1;
    tmp=a[i];
    a[i]=a[ran-1];
    a[ran-1]=tmp;
  }
  printf("Suit      value\n");
  for(int i=0;i<52;i++){
    if(a[i].cardsuit==clubs)
      printf("Clubs     ");
    else if(a[i].cardsuit==diamonds)
      printf("Diamonds  ");
    else if(a[i].cardsuit==hearts)
      printf("Hearts    ");
    else
      printf("Spades    ");
    if(a[i].value==1)
      printf("  A\n");
    else if(a[i].value==11)
      printf("  J\n");
    else if(a[i].value==12)
      printf("  Q\n");
    else if(a[i].value==13)
      printf("  K\n");
    else
      printf("%3d\n",a[i].value);
  }
}
int main(){
  Card deck[52];
  for(int i=0;i<4;i++)
    for(int j=0;j<13;j++){
      deck[13*i+j].value=j+1;
      if(i==0)
        deck[13*i+j].cardsuit=clubs;
      else if(i==1)
        deck[13*i+j].cardsuit=diamonds;
      else if(i==2)
        deck[13*i+j].cardsuit=hearts;
      else if(i==3)
        deck[13*i+j].cardsuit=spades;
    }
  srand(time(NULL));
  while(getchar()!=EOF){
    printf("\n");
    shuffle(deck);
  }
  
  return 0;
}
