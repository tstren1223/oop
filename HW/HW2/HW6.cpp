#include<stdio.h>
#define row 15
#define seat 9
void show(int a[row][seat]){
    printf("H  I  ROW  A  B  C  D  E  F  G  \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<seat;j++){
            if(a[i][j+7]&&j<2)
                printf("x  ");
            else if(j<2)
                printf("*  ");
            else if(j==2){
                printf("%d  ",i+1);
                a[i][j-2]?printf("x  "):printf("*  ");
            }
            else if(a[i][j-2])
                printf("x  ");
            else
                printf("*  ");
        }
        printf("\n");
    }
}

void buy(int a[row][seat]){
    int num,type,sea,ro;
    printf("Please enter the type you want to buy!(first class for 1,business class for 2,economy class for 3)\n");
    scanf("%d",&type);
    printf("Please input the number of tickets : ");
    scanf("%d",&num);
    show(a);
    for(int i=0;i<num;i++){
        switch(type){
            case 1:
                printf("Please choose the seats in the row 1 and 2!(input row 1 or 2 and A~I for seat1~9)");
                do{
                    scanf("%d%d",&ro,&sea);
                }while(((ro)!=1&&(ro)!=2)||(sea)<1||(sea)>9);
                if(a[(ro-1)][sea-1]){
                    printf("Failed to buy the ticket!\n");
                }
                else{
                    a[ro-1][sea-1]=1;
                    printf("Successed to buy the ticket!\n");
                }
                break;
            case 2: 
                printf("Please choose the seats in the row 1 and 2!(input row 3~8 and seat1~9)");
                do{
                    scanf("%d%d",&ro,&sea);
                }while(ro<3||ro>8||sea<1||sea>9);
                if(a[ro-1][sea-1]){
                    printf("Failed to buy the ticket!\n");
                }
                else{
                    a[ro-1][sea-1]=1;
                    printf("Successed to buy the ticket!\n");
                }
                
                break;
            case 3: 
                printf("Please choose the seats in the row 1 and 2!(input row 9~15 and seat1~9)");
                do{
                    scanf("%d%d",&ro,&sea);
                }while(ro<9||ro>15||sea<1||sea>9);
                if(a[ro-1][sea-1]){
                    printf("Failed to buy the ticket!\n");
                }
                else{
                    a[ro-1][sea-1]=1;
                    printf("Successed to buy the ticket!\n");
                }
                break;
        }
    }
    printf("Now:\n");
    show(a);
}

int main(){
    int a[row][seat]={{1,0,1,0,1,0,0,1,1},{0,1,0,1,0,0,0,0,1},{1,0,0,0,0,0,1,1,1},{1,0,0,0,0,1,1,1,1},{0,1,1,0,0,0,0,1,1},{1,1,1,1,1,0,0,1,1},{1,0,0,0,1,0,0,0,1},{1,1,1,0,0,0,0,1,1},{1,1,1,1,0,0,1,1,1},{1,1,0,0,1,1,1,1,1},{0,0,0,0,0,0,0,1,1},{1,1,0,0,0,0,1,1,1},{1,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,1},{0,1,0,0,0,0,0,0,0}};
    bool k=true;
    int cho;
    while(k){
        printf("Hello!Welcome to Airplane Seating Assignment!\n");
        printf("Press 1 to check the avaliable seats!\n");
        printf("Press 2 to reserve the seat!\n");
        printf("Press 3 to exit this system!\n");
        scanf("%d",&cho);
        switch(cho){
            case 1:
                show(a);
                break;
            case 2:
                buy(a);
                break;
            case 3:
                k=false;
                break;
        }
    }
    return 0;
}
