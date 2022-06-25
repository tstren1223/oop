#include<stdio.h>
#include "HW7.h"
int main(){
	int cho,cho1,m,n,*x;
	while(1){
		printf("1. Input data for one vector ( 1-d array  1¡Ñm  or  n¡Ñ1 )\n2. Output data for one vector ( 1-d array  1¡Ñm  or  n¡Ñ1 )\n3. Input data for a matrix ( 2-d array  n¡Ñm )\n4. Output data for a matrix ( 2-d array  n¡Ñm )\n5. Multiplying a matrix by a vector\n6. The transpose of a matrix.\n7. Matrix Addition\n8. Matrix Multiplication\n");
		scanf("%d",&cho);
		switch(cho){
			case 1:
				iov1();
				break;
			case 2:
				oov1();
				break;
			case 3:
				iov2();
				break;
			case 4:
				oov2();
				break;
			case 5:
				mul1();
				break;
			case 6:
				tran();
				break;
			case 7:
				add1();
				break;
			case 8:
				mul2();
				break;
		}
	}
	return 0;
}
