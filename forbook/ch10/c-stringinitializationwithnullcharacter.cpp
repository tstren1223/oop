#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char s[10]="abcde";
	char s1[10]="\0",s3[10];
	char*s2;
	printf("s=%s\n",s);
	strcpy(s,"\0");
	printf("s=%s\n",s);
	printf("s1=%s\n",s1);
	printf("s3=%s\n",s3);
	s2=new char[10];
	strcpy(s2,"test");
	printf("s2=%s\n",s2);
	getch();
	return 0;
}
