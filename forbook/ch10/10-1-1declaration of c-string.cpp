#include<stdio.h>
int main(){
	char s1[]="abcdef";
	char s2[]={'i','j','k','l','m','n','\0'};//\0ªíµ²§ô 
	char *s3="wxyz";
	char s4[8]="tintin";
	puts(s1);
	puts(s2);
	puts(s3);//printf("s3=%s\n",s3);cout<<s3<<endl;
	puts(s4);
	return 0;
}
