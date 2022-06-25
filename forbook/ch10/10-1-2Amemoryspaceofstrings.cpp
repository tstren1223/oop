#include<stdio.h>
#include<string.h>
int main(){
	int *s;
	char s1[20]="c language";
	char s2[]="abcde";
	char*s3 ="the computers";//指標指向另一個string! 
	printf("sizeof(s)=%u\n",sizeof(s));
	printf("sizeof(s1)=%u\n",sizeof(s1));
	printf("strlen(s1)=%u\n",strlen(s1));
	printf("s1: address = %u\n",&s1);
	printf("s1: address = %u\n",s1);
	printf("sizeof(s2)=%u\n",sizeof(s2));
	printf("strlen(s2)=%u\n",strlen(s2));
	printf("s2: address = %u\n",&s2);
	printf("s2: address = %u\n",s2);
	printf("sizeof(s3)=%u\n",sizeof(s3));
	printf("s3: address = %u\n",&s3);
	printf("*s3 address = %u\n",s3);
	printf("*s3 contents = %s\n",s3);
	printf("strlen(s3)=%u\n",strlen(s3));
	return 0;
}
