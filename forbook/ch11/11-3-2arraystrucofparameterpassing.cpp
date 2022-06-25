#include<stdio.h>
#define n 4
struct sco{
	char name[8];
	int s1,s2;
	float avg;
};
void count(sco cs[]){
	int i;
	for(i=0;i<n;i++)
		cs[i].avg=(cs[i].s1+cs[i].s2)/2;
}
/*
void count(sco *cs){
	int i;
	for(i=0;i<n;i++)
		(*(cs+i)).avg=((*(cs+i)).s1+(*(cs+i)).s2)/2;
}
*/
/*
void count(sco *cs){
	int i;
	for(i=0;i<n;i++)
		cs[i].avg=(cs[i].s1+cs[i].s2)/2;//just do like array!because array[] output the content in address!
}
*/
void sort(sco *cs){
	sco t;
	int i,j;
	for(int i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if((*(cs+i)).avg<(*(cs+j)).avg){
				t=*(cs+i);
				//t=cs[i]; 
				*(cs+i)=*(cs+j);
				//cs[i]=cs[j];
				*(cs+j)=t;
				//cs[j]=t;//exchange address of sco variables!cs[i] has data type sco and the value about adress! 
			}
		}
}
void print(sco x[n]){
	int i;
	for(i=0;i<n;i++)
		printf("%-8s %5d%5d    %6.1f\n",x[i].name,x[i].s1,x[i].s2,x[i].avg);
}
int main(){
	sco rec[]={{"Jame",60,90},{"Jackson",59,59},{"Jacky",80,90},{"Jenny",70,70}};
	count(rec);
	sort(rec);
	print(rec);
	return 0;
}
