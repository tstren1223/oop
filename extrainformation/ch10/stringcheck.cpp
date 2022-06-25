#include<stdio.h>
#include<string.h>
int main(){
	char s[10]="kk";
	char *s1;
	//s="kk";
	printf("%s\n",s);
	//s1=new char [6];//可不用這行,pointer的寫法是要指到另一個位置因此可以不必new,除非有用到strcpy或其他string函數! 
	
	//s1=s;
	 
	s1="kkkkk";//用pointer最好是指向另一個已經存在的變數,否則會有error! 
	printf("s1=%s\n",s1);
	return 0;
}
