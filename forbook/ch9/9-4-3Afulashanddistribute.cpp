#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 4//colors 
#define n 13//points
#define y 4//players
char c[4]={6,3,4,5};//ASCII code for suits but now it doesn't work right
char  *d[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//array of strings
//The above two lines are same as the below
//char d[13][3]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
//since the max string length of *d[13] is 3
void flush(int [m][n]);
void print(int [m][n]);
int main(){
	
    int i,j;
    int x[m][n]={0};//record each card distributes to which player
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            x[i][j]=0;//all cards dose not distribute to players
    srand(time(NULL));
    flush(x);
    print(x);
    system("PAUSE");
    return 0;
}
void flush(int x[m][n]){
    int i,j,p=0,c=0,q;
    do{
        i=rand()%m;//flushing,generate color
        j=rand()%n;//flushing,generate point
        //q=rand()%52;
        //i=q%4;
        //j=q%13;
        if(!x[i][j]){
            p=p%y+1;//generate the number of player
            x[i][j]=p;//
            c++;
        }
    }while(c<52);
}
void print(int x[m][n]){
    int p,i,j;
    for(p=1;p<=y;p++){
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(x[i][j]==p)
                    printf("%c %-3s",c[i],d[j]);
        printf("\n");
    }
}
