#include<stdio.h>
int **Matrix(int n,int m){
	int **x;
	x=new int *[n];
	for(int i=0;i<n;i++)
		x[i]=new int [m];
	for(int a=0;a<n;a++)
		for(int b=0;b<m;b++){
			printf("Please input number in %d of %d: ",a+1,b+1);
			scanf("%d",&x[a][b]);
		}
	return x;
}
void del(int **y,int n,int m){
	for(int a=0;a<m;a++)
		delete []y[a];
	delete []y;
	
			printf("%d",y[0][0]);
}
void print(int **x,int n,int m){
	for(int a=0;a<n;a++)
		for(int b=0;b<m;b++){
			printf("in row %d and column %d is %d\n",a+1,b+1,x[a][b]);
		}
}
void iov1 (){
	int **w;
	int cho1,m,n;
	printf("If you want a vactor 1*m,input 1,if you want a vector n*1,input 2.\n");
	scanf("%d",&cho1);
	switch(cho1){
		case 1:
			printf("Please input m\n");
			scanf("%d",&m);
			w=Matrix(1,m);
			del(w,1,m);
			break;
		case 2:
			printf("Please input n\n");
			scanf("%d",&n);
			w=Matrix(n,1);
			for(int a=0;a<m;a++)
			del(w,n,1);
			break;
	}
}

void oov1(){
	int **x;
	int cho1,m,n;
	printf("If you want to output a vactor 1*m,input 1,if you want to output a vector n*1,input 2.\n");
	scanf("%d",&cho1);
	switch(cho1){
		case 1:
			printf("Please input m\n");
			scanf("%d",&m);
			x=Matrix(1,m);
			print(x,1,m);
			del(x,1,m);
			break;
		case 2:
			printf("Please input n\n");
			scanf("%d",&n);
			x=Matrix(n,1);
			print(x,n,1);
			del(x,n,1);
			break;
	}
}
void iov2(){
	int **x;
	int n,m;
	printf("Please input the n and m of n*m matrix!\n");
	scanf("%d",n);
	scanf("%d",m);
	x=Matrix(n,m);
	del(x,n,m);
}
void oov2(){
	int **x;
	int n,m;
	printf("Please input the n and m of n*m matrix!\n");
	scanf("%d",n);
	scanf("%d",m);
	x=Matrix(n,m);
	print(x,n,m);
	del(x,n,m);
}
int **mul(int **x,int **y,int nx,int mx,int ny,int my){
	int **z;
	z=new int *[nx];
	for(int i=0;i<nx;i++)
		z[i]=new int [my];
	for(int a =0;a<nx;a++)
		for(int b=0;b<my;b++){
			int sum=0;
			for(int c =0;c<mx;c++)
					sum+=x[a][c]*y[c][b];
			//printf("%d\n",sum);
			z[a][b]=sum;
		}
	return z;
}
void mul1(){
	printf("Please input one matrix with one vector!\n n and m of n*m :");
	int n,m;
	int **x;
	scanf("%d",&n);
	scanf("%d",&m);
	x=Matrix(n,m);
	printf("Please to choose you want to multiply it by its left(1) or right(2) before you input value in the vector!\n");
	int cho;
	int **y,**z;
	scanf("%d",&cho);
	switch(cho){
		case 1:
			y=Matrix(1,n);
			z=mul(y,x,1,n,n,m);
			print(z,1,m);
			del(z,1,m);
			break;
		case 2:
			y=Matrix(m,1);
			z=mul(x,y,n,m,m,1);
			print(z,n,1);
			del(z,n,1);
			break;
	}
}
int **t(int **x,int n,int m){
	int **t;
	t=new int *[m];
	for(int i=0;i<m;i++)
		t[i]=new int [n];
	for(int a=0;a<m;a++)
		for(int b=0;b<n;b++)
			t[a][b]=x[b][a];
	return t;
}
void tran(){
	printf("Please input the n and m of n*m:");
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int **x;
	x=Matrix(n,m);
	int **ta;
	ta=t(x,n,m);
	print(ta,m,n);
	del(ta,m,n);
}
int **add(int **x,int **y,int n,int m){
	int **z;
	z=new int *[n];
	for(int i=0;i<n;i++)
		z[i]=new int [m];
	for(int a=0;a<n;a++)
		for(int b=0;b<m;b++)
			z[a][b]=x[a][b]+y[a][b];
	return z;
}
void add1(){
	int n,m;
	printf("Please input the two matrixs!\nn and m of 1' and 2's:");
	int **x,**y;
	scanf("%d",&n);
	scanf("%d",&m);
	x=Matrix(n,m);
	y=Matrix(n,m);
	int **z;
	z=add(x,y,n,m);
	print(z,n,m);
	del(z,n,m);
}
void mul2(){
	int nx,ny,mx,my;
	
	printf("Please input two matrixs you want to multiply!(if wrong input ,this will ask again))\nn and m of 1's:");
	do{
	scanf("%d",&nx);
	scanf("%d",&mx);
	printf("n and m of 2's:");
	scanf("%d",&ny);
	scanf("%d",&my);
	}while(mx!=ny);
	int **x,**y;
	x=Matrix(nx,mx);
	y=Matrix(ny,my);
	int **z;
	if(mx=ny){
		z=mul(x,y,nx,mx,ny,my);
		print(z,nx,my);
		del(z,nx,my);
	}
	
}
