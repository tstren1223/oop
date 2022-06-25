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
    if(p[i]<97||p[i]==' ')
      *(t+i)=' ';
    else if(p[i]>=97&&p[i]<=122)
      *(t+i)=s[(p[i]-'a'+k)%26];//shifting
  }
  t[strlen(p)]='\0';//ensuring the correct output
  printf("plaintext = %s\n",p);
  printf("ciphertext = %s\n",t);
  return 0;
}
