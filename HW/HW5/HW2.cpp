#include<stdio.h>
#include<string.h>
//用抓包的方式->>>>先頭尾各抓一個-->直到不行再一次抓兩個! 
char* process(char*a){
  char *b;
  b=new char[strlen(a)+1];
  int n=0;
  for(int i=0;i<strlen(a);i++){
    if(a[i]!=' '&&a[i]!='?'&&a[i]!='\n'){
      if(a[i]>='a'&&a[i]<='z')
        a[i]-=32;
      b[n]=a[i];
      n++;
    }
  }
  b[n]='\0';
  return b;
}
int chepalic(char *a ){
  char *b=process(a);
  int n=strlen(b);
  int chnum=0;
  int chosen=0;
  bool che=true;
    while(b[chosen]==b[n-1-chosen]&&(n%2==0?chosen!=(n)/2:chosen!=(n-1)/2)){
    	printf("%c%c\n",b[chosen],b[n-1-chosen]);
      chosen++;
    }
    if(b[chosen]<0){
      chnum=1;
    while((n%2==0?chosen!=(n)/2:chosen!=(n-1)/2)&&chnum!=((n%2==1?(n-1-chosen*2)/2:(n-chosen*2)/2))){
       for(int i=0;i<chnum;i++){
        if(b[chosen+i]!=b[n+i-chosen-chnum]){ 
          chnum++;
          break;
        }
        if(i==chnum-1){
          chosen+=chnum;
          chnum=1;
        }
       }
       
  }
    
    if(n%2==0?chosen!=(n)/2:chosen!=(n-1)/2){
      int num=0;
      for(int i=chosen;i<=n-1-chosen;i++){
        if(a[i]==' ')
          num++;
      
      }
      if(num==0)
        che=true;
      else
        che=false;
    
    }
    }
    else if(n%2==0?chosen!=(n)/2:chosen!=(n-1)/2){
      che=false;
    }
    else{
      che=true;
    }
    printf("%d\n",chosen);
  return che;
}
int chepaliw(char *a){
  int n=strlen(a)-1;
  int chnum=2;
  int chosen=0;
  int spanum=0;
  int *space=new int [n+1];
  bool che=true;
  for(int i=0;i<n;i++)
    if(a[i]>='a'&&a[i]<='z')
      a[i]-=32;
    else if(a[i]==' '){
      space[spanum]=i;
      spanum++;
    }
    else if(a[i]=='?'){
      n-=1;
    }
  /*
  if(odd){
  
  }
  else{
    while(chosen!=(spanum-1)/2&&che){
      for(int i=0;i<space[chosen];i++){
         if(a[chnum+i]!=a[n-1-space[chosen]
      } 
      chnum+=space[chosen];
      chosen++;
    }
  }
*/
	bool fal=true;
     while(chosen!=(n-1)/2&&chnum!=(n-1-chosen*2)/2&&fal){
       for(int i=0;i<chnum;i++){
        if(a[chosen+i]!=a[n+i-chosen-chnum]){ 
          chnum++;
          fal=false;
          break;
        }
        if(i==chnum-1){
          chosen+=chnum;
          chnum=1;
        }
       }
  }
    if(n%2==0?chosen!=(n)/2:chosen!=(n-1)/2){
      int num=0;
      for(int i=chosen;i<=n-1-chosen;i++){
        if(a[i]==' ')
          num++;
      
      }
      if(num==0)
        che=true;
      else
        che=false;
    
    }
  
  return che;
}
int main(){
  char a[1000];
  while(printf("Please input the string!\n"),fgets(a,1000,stdin)!=NULL){
    if(chepalic(a)||chepaliw(a))
      printf("%d,%dThis string is palindrome.\n",chepalic(a),chepaliw(a));
    else
      printf("This string is not palindrome.\n");
  }
  return 0;
}
