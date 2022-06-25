#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void show(char **c,int n){
    for(int i=0;i<n;i++)
        printf("---");
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]!=' ')
                c[i][j]=='a'?printf("O  "):printf("X  ");
            else
                printf("   ");
            
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
        printf("---");
    printf("\n");
}
int det(char**c,int n){

    int a[3]={0},b[3]{0};//for three possibilities
    bool fill=true;
    int win=0;//for winner!1 for a ,2 for b,3 for draw
    for(int i=0;i<n;i++){
        a[0]=0,b[0]=0;
        a[1]=0,b[1]=0;
        for(int j=0;j<n;j++){
            if(c[i][j]=='a')
                a[0]++;
            else if(c[i][j]=='b')
                b[0]++;
            else if(fill&&c[i][j]==' ')
                fill=false;
            if(a[0]==n)
                win=1;
            else if(b[0]==n)
                win=2;
            if(win)
                break;
            if(c[j][i]=='a')
                a[1]++;
            else if(c[j][i]=='b')
                b[1]++;
            if(a[1]==n)
                win=1;
            else if(b[1]==n)
                win=2;
            if(win)
                break;

        }
        if(win)
            break;
        if(c[i][i]=='a')
            a[2]++;
        else if(c[i][i]=='b')
            b[2]++;
        if(a[2]==n)
            win=1;
        else if (b[2]==n)
            win=2;
        if(win)
            break;
    }
    if(fill&&!win)
        win=3;
    return win;   
    
}
void PP(int wi[2],char **c,int *draw,int n){
    int game=0;
    int row,line;
    while(!game){
        show(c,n);
        do{printf("The first player's turn:(row for 1~%d,line for 1~%d)\n",n,n);
        scanf("%d%d",&row,&line);
        row--;
        line--;
        }while(c[row][line]!=' ');
        c[row][line]='a';
        game=det(c,n);
        if(game){
            show(c,n);
            break;
        }
        do{printf("The second player's turn:(row for 1~n,line for 1~n)\n");
        scanf("%d%d",&row,&line);
        row--;
        line--;
        }while(c[row][line]!=' ');
        c[row][line]='b';   
        game=det(c,n);
        if(game){
            show(c,n);
            break;
        }
    }
    if (game==1)
        wi[0]++;

    else if(game==2)
        wi[1]++;
    else if(game==3)
        (*draw)++;
}
void PC(int wi[2],char **c,int *draw,int n){
    int game=0;
    int row,line;
    while(!game){
        show(c,n);
        do{printf("The player's turn:(row for 1~%d,line for 1~%d)\n",n,n);
        scanf("%d%d",&row,&line);
        row--;
        line--;
        }while(c[row][line]!=' ');
        c[row][line]='a';
        game=det(c,n);
        if(game){
            show(c,n);
            break;
        }
        do{
            row=rand()%n;
            line=rand()%n;
        }while(c[row][line]!=' ');
        c[row][line]='b';   
        game=det(c,n);
        if(game){
            show(c,n);
            break;
        }
    }
    if (game==1)
        wi[0]++;

    else if(game==2)
        wi[1]++;
    else if(game==3)
        (*draw)++;
}int main(){
    int cho1,cho2=1;
    int wi[2]={0};
    char **c;
    int x,draw=0;

       
        srand(time(NULL));
    while( printf("Please input the mode you want to play!1 for player v,s. player,and 2 for player v.s.computer,0 for get out\n"),scanf("%d",&cho1)!=EOF&&cho1){
        wi[1]=0;wi[0]=0;
        draw=0;
        cho2=1;
        printf("Please input the n of nxn board!(n>=3)\n");
        scanf("%d",&x);
        c=new char *[x];
        for(int i=0;i<x;i++){
            c[i]=new char [x];
            for(int j=0;j<x;j++)
                c[i][j]=' ';
        }
        while(cho2){
            for(int i=0;i<x;i++)
                for(int j=0;j<x;j++)
                    c[i][j]=' ';
            switch(cho1){
             case 1:
                 PP(wi,c,&draw,x);
                 break;
             case 2:
                 PC(wi,c,&draw,x);
                 break;
            }
            printf("Now player 1 has %d points and player 2 has %d points,and draws are %d points!\n",wi[0],wi[1],draw);
            printf("\n\n");
            printf("Do yo want to play again?(1 for continue,0 for other play!)\n");
            scanf("%d",&cho2);
        }
    }
    return 0;
}
