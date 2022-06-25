#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n;
  int*pi;
  printf("How many numbers do you want to enter?");
  scanf("%d",&n);
  pi=(int*)calloc(n,sizeof(int));
  if(pi==NULL)//out of memory
    exit(1);
  for(i=0;i<n;i++){
    printf("Enter number #%02d: ",i+1);
    scanf(" %d",&pi[i]);
  }
  printf("You have entered:\n");
  for(i=0;i<n;i++)
    printf("%d ",pi[i]);
  printf("\n");
  free(pi);//deallocate
  return 0;
}
