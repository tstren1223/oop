//�C�@��j�j��|��j�����᭱�� 
//�̤j�u���Ʀn 
#include<stdio.h>
void bubble(int list [],int n){
	for(i=0;i<n-1;i++)  //to calculate the number of the finished value
		for(j=0;j<n-1-i;j++)
			if(list[j]>list[j+1])
				swap(&list[j],&list[j+1]);
}
