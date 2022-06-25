#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,n;
  char*buffer;
  srand(time(NULL));
  printf("How long do you want the string?");
  scanf("%d",&i);
  buffer=(char*)malloc(i+1);
  if(buffer==NULL)//out of memory
    exit(1);
  for(n=0;n<i;n++)
    buffer[n]=rand()%26+'a';
  buffer[i]='\0';
  printf("The random string: %s\n",buffer);
  free(buffer);//deallocate
  return 0;
}
