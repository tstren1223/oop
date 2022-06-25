#include<stdio.h>
#include<math.h>
int x[11]={0,1,2,3,4,5,6,7,8,9,10};
double y[11];
int IY[11];
int main()
{
	int i,j;
	double ymax,ymin;
	for(i=0;i<11;i++)
		y[i]=sin(M_PI*x[i]/10.)*sin(M_PI*x[i]/10.);
	ymax=y[0];
	for(i=1;i<11;i++)
	{
		if(ymax<y[i])
			ymax=y[i];
	}
	ymin=y[0];
	for(i=1;i<11;i++)
	{
		if(ymin>y[i])
			ymin=y[i];
	}
	for(i=0;i<11;i++)
		IY[i]=ceil(80*(y[i]-ymin)/(ymax-ymin));
	for(i=0;i<11;i++)
	{
		for(j=0;j<83;j++)
		{
			if(j==0||j==82)
				printf("|");
			else if(j==IY[i]+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
