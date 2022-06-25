#include<stdio.h>
struct sco{
	char name[8];//¤£«ØÄ³¼gpointer 
	int s1,s2;
	float avg;
};
int main(){
	sco rec[]={{"Jame",60,90},{"Jackson",59,59},{"Jacky",80,90},{"Jenny",70,70}};
	int i;
	for(i=0;i<4;i++)
		rec[i].avg=(rec[i].s1+rec[i].s2)/2;
	printf("Name        S1   S2     Average\n");
	printf("-------------------------------\n");
	for(i=0;i<4;i++){
		printf("%-8s %5d%5d    %6.1f\n",rec[i].name,rec[i].s1,rec[i].s2,rec[i].avg);
	}
	return 0;
}
