#include<stdio.h>
//排好最小的優先 
void sort(int a[],int n){
	int i,j;
	void(swap(int*,int*);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(&a[i],&a[j]);
}
void selectionSort(int list[],int length){
	int i,j,s;
	int temp;
	for(i=0;i<length-1;i++){
	
	s=i;
	for(j=i+1;j<length;j++)
		if(list[s]>list [j])
			s=j;//record the location
	temp=list[s];
	list[s]=list[i];
	list[i]=temp;
	}
}
