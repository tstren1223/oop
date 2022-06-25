#include<stdio.h>
#include<string.h>
char s[]="abcdefghijklmnopqrstuvwxyz";
int main(){
  int i,j,k;
  char p[80],t[80];
  printf("Enter offset: ");
  scanf("%d",&k);
  printf("Enter source word: ");
  scanf(" ");
  gets(p);
  for(i=0;i<strlen(p);i++)//scan through p
  {
    for(j=0;j<strlen(s);j++)//scan through s
    {
    //find the position of the character in p
    if(*(p+i)==*(s+j))
        break;
    }
    if(j==strlen(s))
      *(t+i)=' ';
    else
      *(t+i)=*(s+(j+k)%26);//shifting
  }
  t[strlen(p)]='\0';//ensuring the correct output
  printf("plaintext = %s\n",p);
  printf("ciphertext = %s\n",t);
  return 0;
}
