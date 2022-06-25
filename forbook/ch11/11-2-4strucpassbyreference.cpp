#include<iostream>
using namespace std;
struct stu{
	char firstname[10],lastname[10];
	char coursegrade;
	int testscore,programmingscore;
	double GPA;
};
void readIn(stu &a){
	int score;
	cin>>a.firstname>>a.lastname>>a.testscore>>a.programmingscore;
	score=(a.testscore+a.programmingscore)/2;
	if(score>=90)
		a.coursegrade='A';
	else if(score>=80)
		a.coursegrade='B';
	else if(score>=70)
		a.coursegrade='C';
	else if(score>=60)
		a.coursegrade='D';
	else
		a.coursegrade='F';
}
void pstu(stu &a){
	//int score;
	cout<<a.firstname<<a.lastname<<endl;
	cout<<a.testscore<<a.programmingscore<<endl;
	cout<<a.coursegrade<<endl;
}
int main(){
	stu a;
	readIn(a);
	pstu(a);
	return 0;
}
