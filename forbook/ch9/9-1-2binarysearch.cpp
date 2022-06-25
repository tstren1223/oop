//extra information:size超過55萬左右就無法運作! 故last不用設到int以後 
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
		return -1; //直接濃縮成return found; 
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
