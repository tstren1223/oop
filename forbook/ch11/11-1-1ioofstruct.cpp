#include<stdio.h>
int main(){
	struct date{
		int month;
		int day;
		int year;
	};
	struct date birthday;//¥i¤£¥[struct 
	birthday.month=3;
	birthday.day=10;
	birthday.year=1990;
	printf("The birthday is %d/%d/%d\n",birthday.month,birthday.day,birthday.year);
	return 0;
}
