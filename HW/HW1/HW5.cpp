#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sesrch(int *a,int n,int v){
   int loc=-1;
   //printf("%d\n",v);
   for(int i=0;i<n;i++)
       if(a[i]==v){
           loc=i;
           break;
       }
   return loc;//§ä¨ìreturn value>-1¨S§ä¨ìreturn -1!
}
int main(){
    srand(time(NULL));
    int a[150];
    int num=0;
    //int use[201]={0};
	int ran;
    
    
	
    for(int i=0;i<150;i++){
        /*do{
			ran=rand()%200+1;
		}while(use[ran]==1);
		use[ran]=1;
		a[i]=ran;*/
		a[i]=rand()%200+1;	
	}
    for(int i=0;i<200;i++){
        if(sesrch(a,150,rand()%200+1)>-1)
            num++;
    }
    printf("the number of successful searches: %d\nthe percentage of successful searches:%lf\n",num,num/200.0);
    return 0;
}
