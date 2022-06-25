#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct pixel{
  int red,green,blue;
};
void img(pixel **a,int m,int n){
  printf("img:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      a[i][j].red=rand()%256;
      a[i][j].green=rand()%256;
      a[i][j].blue=rand()%256;
      printf("(%3d,%3d,%3d) ",a[i][j].red,a[i][j].green,a[i][j].blue);
    }
    printf("\n");
  }
}
void tmp(pixel **a,pixel **b,int m,int n){
  printf("tmp:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      b[i][m-1-j]=a[j][i];
    }
    for(int j=0;j<m;j++){
      printf("(%3d,%3d,%3d) ",b[i][j].red,b[i][j].green,b[i][j].blue); 
    }
    printf("\n");
  }
}
int main(){
  int m,n;
  srand(time(NULL));
  pixel **a,**b;
  while(printf("Please input the row and column of pixels!\n"),scanf("%d%d",&m,&n)!=EOF&&m>=0&&n>=0){
    a=new pixel*[m];
    b=new pixel*[n];
    for(int i=0;i<m;i++)
      a[i]=new pixel[n];
    for(int i=0;i<n;i++)
      b[i]=new pixel[m];
    img(a,m,n);
    tmp(a,b,m,n);
    for(int i=0;i<m;i++)
      delete []a[i];
    for(int i=0;i<n;i++)
      delete []b[i];
    delete []a;
    delete []b;
  }
  return 0;
}
