#include<stdio.h>
#include<string.h>
int main(){
	struct date{
		int month,day,year;
	};
	struct personnel{
		char*name;
		date birthday;
	}p;
	//p.name=new char[80];
	p.name="Jacky Chen";
	//strcpy(p.name,"Jacky Chen");
	p.birthday.month=6;
	p.birthday.day=11;
	p.birthday.year=1954;
	printf("The name is %s\n",p.name);
	printf("The birthday is %d/%d/%d\n",p.birthday.month,p.birthday.day,p.birthday.year);
	return 0;
}
