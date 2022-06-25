#include<stdio.h>
#include<string.h>
int UPC(char *a){
  int sum1=0,sum2=0;
  for(int i=0;i<11;i++){
    i%2==0?sum1+=a[i]-48:sum2+=a[i]-48;
  }
  sum1*=3;
  return (10-(sum1+sum2)%10)%10;
}
int main(){
 int condi=0;char a[13];
 while(printf("Please input the UPC!\n")){
  do{
    condi=1;
    if(scanf("%s",a)==EOF){
      condi=-1;
      break;
    }
    for(int i=0;i<12;i++){
      (a[i]<48||a[i]>48+9)?condi=0:0;
      if(!condi)
        break;
    }
  }while(!condi);
  if(condi==1){
    if(UPC(a)==a[11]-48)
      printf("Valid UPC!\n");
    else
      printf("invalid UPC!\n");
  }
  else if(condi==-1)
    break;
 }
 return 0;
}
