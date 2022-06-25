//定義loc,return location! const加在parameter裡! 
#include<iostream>
using namespace std;
const int size=10;
int seqSearchA(const int list[],int listLength,int searchItem){
	int loc;
	bool found = false;
	for(loc=0;loc<listLength;loc++)
		if(list[loc]==searchItem){
			found = true;
			break;
		}
	if(found)
		return loc;
	else 
		return -1;
}
int seqSearchB(const int list[],int listLength,int searchItem){
	int loc;
	for(loc=0;loc<listLength;loc++)
		if(list[loc]==searchItem)
			return loc;
	return -1;
}
int main(){
	int list[size];
	int num;
	int index;
	for(index=0;index<size;index++)
		cin>>list[index];
	cout<<"Enter the number to be searched: ";
	cin>>num;
	index=seqSearchA(list,size,num);
	if(index!=-1)
		cout<<num<<" is found at position "<<index;
	else
		cout<<num<<" is not in the list.";
	cout<<endl;
	return 0;
}
