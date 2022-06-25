#include<iostream>
#include<stdio.h>
using namespace std;
const int size=10;

int seqOrderedSearch(const int list[],int listLength,int searchItem){
	int loc;
	bool found = false;
	for(loc=0;loc<listLength;loc++)
		if(list[loc]==searchItem){
			found = true;
			//break;
			return loc;
		}
		else if(list[loc]>searchItem||loc==listLength-1)//如果有小排到大
			//break;
			return -1; //與非ordered的唯一差別 
	/*if(found)
		return loc;
	else 
		return -1;*/
}
void selsort(int list[],int listLength){
	int s,temp;
	for(int i=0;i<listLength-1;i++){
		s=i;
		for(int j=i+1;j<listLength;j++){
			if(list[s]>list[j])
				s=j;
		}
		temp=list[i];
		list[i]=list[s];
		list[s]=temp;
	}
}
int main(){
	int list[size];
	int num;
	int index;
	for(index=0;index<size;index++)
		cin>>list[index];
	
	selsort(list,size);
	printf("outcome of sorting:\n");
	for(int i=0;i<size;i++)
		printf("%d\n",list[i]);
		
	cout<<"Enter the number to be searched: ";
	cin>>num;
	
	
	index=seqOrderedSearch(list,size,num);
	if(index!=-1)
		cout<<num<<" is found at position "<<index;
	else
		cout<<num<<" is not in the list.";
	cout<<endl;
	return 0;
}
