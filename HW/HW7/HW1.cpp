#include<stdio.h>
class Fraction
{  int numer;
   int denom;
   int find_gcd(int, int);
 public:
   Fraction();
   Fraction(int);
   Fraction(int, int);
   void setNum( int);
   void setDEN( int);
   int getNum();
   int getDen();
   void increment();
   Fraction operator + (const Fraction &fr);
   Fraction operator * (const Fraction &fr);
   void reduce_fraction(int, int ); 
void print_fraction( );
   };
int Fraction::find_gcd(int a,int b){
	while((a%=b)&&(b%=a));
	return a+b;
}

void Fraction::reduce_fraction(int a,int b){
	int c=find_gcd(a,b);
	numer=a/c;
	denom=b/c;
}
Fraction::Fraction(){
	numer=0;
	denom=1;
}
Fraction::Fraction(int s){
	numer=s;
	denom=1;
}
Fraction::Fraction(int a,int b){
	numer=a;
	denom=b;
}
void Fraction::setNum(int a){
	numer=a;
}
void Fraction::setDEN(int a){
	denom=a;
}
int Fraction::getNum(){
	
	reduce_fraction(numer,denom);
	return numer;
}
int Fraction::getDen(){
	
	reduce_fraction(numer,denom);
	return denom;
}
void Fraction::increment(){
	numer++;
}
Fraction Fraction::operator +(const Fraction &fr){
	Fraction a;
	//a.numer=numer+fr.numer;
	//a.denom=demon+fr.demon;//fraction plus need to find lcd!
	int b=denom,c=fr.denom;
	while((b%=c)&&(c%=b));
	b=b+c;//gcd
	c=denom;
//	c=demon*fr.demon/b;//lcd
	denom*=fr.denom/b;
	numer*=fr.denom/b;
	a.denom=denom;
	a.numer=numer+fr.numer*c/b;
	//b=a.find_gcd(a.denom,a.numer);
	//a.denom/=b;
	//a.numer/=b;
	a.reduce_fraction(a.numer,a.denom);
	return a;
}
Fraction Fraction::operator *(const Fraction &fr){
	Fraction a;
	a.denom=denom*fr.denom;
	a.numer=numer*fr.numer;
	a.reduce_fraction(a.numer,a.denom);
	return a;
}
void Fraction::print_fraction(){
	reduce_fraction(numer,denom);
	if(numer)
	 printf("%d/%d\n",numer,denom);
	else
	printf("0\n");
}
int main(){
	Fraction a,b(1),c(1,2);
	a.print_fraction();
	b.print_fraction();
	c.print_fraction();
	a=a+b;
	a.print_fraction();
	a=a*c;
	a.print_fraction();
	a=a*c;
	a.print_fraction();
	int d,e;
	printf("please input the num and dem:\n");
	scanf("%d%d",&d,&e);
	Fraction f(d,e);
	f.print_fraction();
}
