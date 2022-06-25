#include<stdio.h>
#define n 20
struct book{
  int canum;
  char title[20];
  char auname[20];
  int pri;
  int iss;
};
void addbi(book a[]){
  int cho;
  int num;
  printf("Please input the catalog number of the book you want to add information!\n");
  scanf("%d",&num);
  while(printf("Please input 1~5 to add information for catalog number,title,author name,price,issue or not,or 0 for exit.\n"),scanf("%d",&cho)!=EOF&&cho){
    switch(cho){
      case 1:
        scanf("%d",&a[num].canum);
        break;
      case 2:
        getchar();
        scanf("%[^\n]",(a[num].title));
        break;
      case 3:
        getchar();
        scanf("%[^\n]",a[num].auname);
        break;
      case 4:
        scanf("%d",&a[num].pri);
        break;
      case 5:
        printf("1 for issued,0 for not!\n");
        scanf("%d",&a[num].iss);
        break;
    }
  }
}
void disbi(book a[]){
  printf("Please input the catalog number of the book you want to display information!\n");
  int num;
  int k;
  scanf("%d",&num);
  for(int i=0;i<n;i++)
    if(a[i].canum==num){
      k=i;
      break;
    }
  printf("The title of the book: %s\n",a[k].title);
  printf("The author name of the book: %s\n",a[k].auname);
  printf("The catalog number of the book: %d\n",a[k].canum);
  printf("The price of the book: %d\n",a[k].pri);
  if(a[k].iss)
    printf("The book is issued.\n");
  else
    printf("The book is not issued!\n");
}
void auth(book a[n]){
  char s[20];
  printf("Please input the author you want to search!\n");
  getchar();
  int k;
  k=scanf("%[^\n]",s);
  int che;
  for(int j=0;j<n;j++){
    che=1;
    for(int i=0;i<k;i++)
     if(a[j].auname[i]!=s[i]){
       che=0;
       break;
     }
    if(che){
      printf("The title of <%s> and the catalog number of %d is a book of the author.\n",a[j].title,a[j].canum);
    }
  }
  
}
void ti(book a[n]){
  printf("Please input the catalog numbers you want to see titles!(enter-1 to exist!)\n");
  int num;
  while(scanf("%d",&num)&&num!=-1){
  for(int i=0;i<n;i++)
    if(a[i].canum==num){
      printf("The title of this book is %s.\n",a[i].title); 
      break;
    }
  }
}
void binl(book a[n]){
  int count=0;
  for(int i=0;i<20;i++){
    if(!a[i].iss)
      count++;
  }
  printf("Now,the count of books in the library is %d.\n",count);
}
void order(book a[n]){
  book tmp;
  for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
      if(a[i].canum>a[j].canum){
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
  for(int i=0;i<n;i++){
    printf("Book <%s> has the catalog number %d.\n",a[i].title,a[i].canum);
  }
}
int main(){
  book a[n]={{0,"a","A",10,0},{1,"a","A",10,0},{2,"a","A",10,0},{3,"a","A",10,0,} ,{4,"a","A",10,0,} ,{5,"a","A",10,0,} ,{6,"a","A",10,0,} ,{7,"a","A",10,0,} ,{8,"a","A",10,0,} ,{9,"a","A",10,0,} ,{10,"a","A",10,0,} ,{11,"a","A",10,0,} ,{12,"a","A",10,0,} ,{13,"a","A",10,0,} ,{14,"a","A",10,0,} ,{15,"a","A",10,0,} ,{16,"a","A",10,0,} ,{17,"a","A",10,0,} ,{18,"a","A",10,0,} ,{19,"a","A",10,0,}};
  void (*p[6])(book[n])={addbi,disbi,auth,ti,binl,order};
  int cho;
  while(printf("Please input 1~7 to add book information,display book information,list all books of give author,list the title of a specified book,list the count of books in the library,list the books in the order of catalog number or exit!\n"),scanf("%d",&cho)){
    if(cho==7)
      break;
    cho-=1;
    p[cho](a);
  }
  return 0;
}
