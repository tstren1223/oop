#include<stdio.h>
#include<string.h>
int main(){
	char s[10]="kk";
	char *s1;
	//s="kk";
	printf("%s\n",s);
	//s1=new char [6];//�i���γo��,pointer���g�k�O�n����t�@�Ӧ�m�]���i�H����new,���D���Ψ�strcpy�Ψ�Lstring���! 
	
	//s1=s;
	 
	s1="kkkkk";//��pointer�̦n�O���V�t�@�Ӥw�g�s�b���ܼ�,�_�h�|��error! 
	printf("s1=%s\n",s1);
	return 0;
}
