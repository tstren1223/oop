//extra information:size�W�L55�U���k�N�L�k�B�@! �Glast���γ]��int�H�� 
//imprortant
#include<iostream>
using namespace std;
const int arraySize=12;
int binarySearch(const int list[],int listLength,int searchItem){
	int first=0;
	int last=listLength-1;
	int mid;
	bool found=false;//int found=-1;
	while(first<=last&&!found){//found==-1&&first<=last
		mid=(first+last)/2;//the middle element
		cout <<first << " "<<last<<" "<<mid<<" "<<list[mid] <<endl;
		if(list[mid]==searchItem)
			found=true;//found=mid;
		else if(list[mid]>searchItem)
			last=mid-1;//update last
		else 
			first=mid+1;//update first
			
	}
	if(found)
		return mid;
	else
		return -1; //�����@�Y��return found; 
}
int main(){
	int list[12]={2,7,15,23,29,35,39,66,78,90,110,123};
	int item;
	cout << "Please enter search item: ";
	cin>>item;
	cout<<binarySearch(list,arraySize,item)<<endl;
	system("pause");
	return 0;
}
