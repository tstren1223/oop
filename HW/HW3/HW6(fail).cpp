#include<stdio.h>
#include<math.h>
#include<windows.h>
//only case 0 success!
struct point{
  int x,y;
};
struct line{
  point str;
  point end;
};
struct circle{
  point o;
  int r;
};
void setco(int *maxx,int *maxy,point &orig){
  printf("Please input the maxx and maxy of screen you want to use!\n");
  scanf("%d%d",maxx,maxy);
  orig.x=(*maxx);
  orig.y=(*maxy);
}
void pintl(point &o,line &b,int &x,int &y){
	//catagorize to 4 situation:/\-|
	int di=1;
	int dir=0;//for right or left or up or down
	//if(b.str.y==b.end.y)
	//	dir=4;//for -
	if(b.str.x>b.end.x)
		dir=1;//for /
	else if(b.str.x==b.end.x)
		dir=2;//for |
	else if(b.str.x<b.end.x)
		dir=3;//for \
		
	di=dir-2;
	int cho=0;
	if(abs(b.str.x-b.end.x)<=1&&abs(b.str.y-b.end.y)<=1){
		b.str.x==b.end.x?cho=1:0;//for|
		b.str.y==b.str.y?cho=2:0;//for-
		b.str.x>b.end.x?cho=3:4;//for/\
		
	}
	
	for(int i=0;i<=2*y;i++){
  	if(i==b.str.y&&b.str.y!=b.end.y){//str.y>end.y
  	if(i!=o.y){
  		if(o.x<b.str.x){
	  	  for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      printf("|");
	      for(int j=0;j<b.str.x-o.x-1;j++)
	      	printf(" ");
	    	cho==0?printf(".\n"):0;
		}
		else if(o.x==b.str.x){
		   for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      cho==0?printf(".\n"):0;
		}
		else{
			for(int j=0;j<b.str.x;j++)
	  	   printf(" ");
	      cho==0?printf(".\n"):0;
	      for(int j=0;j<-b.str.x+o.x-1;j++)
	      	printf(" ");
	    	printf("|\n");
		}
	}
	else {
		for(int j=0;j<=2*x;j++)
        j!=b.str.x?printf("-"):cho==0?printf("."):0;
      printf("\n");
	}
	  }
	  else if(i>b.str.y&&i<=b.end.y){
	  	if(i!=o.y){
  		if(o.x<b.str.x+di){
	  	  for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      printf("|");
	      for(int j=0;j<b.str.x+di-o.x-1;j++)
	      	printf(" ");
	    	cho==0?dir==1?printf("/\n"):dir==3?printf("\\n"):dir==2?printf("|\n"):0:cho==1?printf("|\n"):cho==3?printf("/\n"):cho==4?printf("\\n"):0;
		}
		else if(o.x==b.str.x+di){
		   for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      cho==0?dir==1?printf("/\n"):dir==3?printf("\\n"):dir==2?printf("|\n"):0:cho==1?printf("|\n"):cho==3?printf("/\n"):cho==4?printf("\\n"):0;
		}
		else{
			for(int j=0;j<b.str.x+di;j++)
	  	   printf(" ");
	      cho==0?dir==1?printf("/\n"):dir==3?printf("\\n"):dir==2?printf("|\n"):0:cho==1?printf("|\n"):cho==3?printf("/\n"):cho==4?printf("\\n"):0;
	      for(int j=0;j<o.x-b.str.x+di-1;j++)
	      	printf(" ");
	    	printf("|\n");
		}
	}
	else {
		for(int j=0;j<=2*x;j++)
		//if(j!=b.str.x)
		//else
        //cho==0?dir==1?printf("/\n"):dir==3?printf("\\n"):dir==2?printf("|\n"):0:cho==1?printf("|\n"):cho==3?printf("/\n"):cho==4?printf("\\n"):0;
      printf("\n");
	}
	di++;
	  }
    else if(i!=o.y){
    for(int j=0;j<o.x;j++)
     printf(" ");
    printf("|\n");
    }
    else{
      for(int j=0;j<=2*x;j++)
        printf("-");
      printf("\n");
    }
  }
}
void printp(point &o,point &a,int &x,int &y){
	//int cho=0;
	//a.x==o.x?a.y==o.y?cho=4:cho=3:a.y==o.y?cho=2:cho=1;//categorize to three situations//4 for xy same 3 for x same 2 for y same 1 for not xypole
	
  for(int i=0;i<=2*y;i++){
  	if(i==a.y){//this can handle situation 1 and 3
  	if(i!=o.y){
  		if(o.x<a.x){
	  	  for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      printf("|");
	      for(int j=0;j<a.x-o.x-1;j++)
	      	printf(" ");
	    	printf(".\n");
		}
		else if(o.x==a.x){
		   for(int j=0;j<o.x;j++)
	  	   printf(" ");
	      printf(".\n");
		}
		else{
			for(int j=0;j<a.x;j++)
	  	   printf(" ");
	      printf(".");
	      for(int j=0;j<-a.x+o.x-1;j++)
	      	printf(" ");
	    	printf("|\n");
		}
	}
	else {
		for(int j=0;j<=2*x;j++)
        j!=a.x?printf("-"):printf(".");
      printf("\n");
	}
	  }
    else if(i!=o.y){
    for(int j=0;j<o.x;j++)
     printf(" ");
    printf("|\n");
    }
    else{
      for(int j=0;j<=2*x;j++)
        printf("-");
      printf("\n");
    }
  }
  
}
/*void printpo(point &a,int&x,int&y){
  //printf("\n\b\r");//the backspace cannot go back to the last line which achieved by \n
  printf("A\n");
  system("pause");
  for(int i=y;i>a.y;i--)
    printf("\b\r");
  for(int i=0;i*8<=a.x;i++)
    printf("\t");
  for(int i=0;i<=8-a.x%8;i++)
    printf("\b");
  printf(".");
  printf("\r");
  for(int i=a.y;i<=y+1;i++)
    printf("\n");
}*/
int main(){
  int maxx,maxy;
  point orig,a;
  line b;
  int cho;

  while(printf("Please input 0~2 for showing a point or showing a line or showing a circle !\n"),scanf("%d",&cho)!=EOF){
    setco(&maxx,&maxy,orig);
	switch(cho){
      case 0:
        printf("Please input the point you want to show :");
        scanf("%d%d",&a.x,&a.y);
        a.x+=orig.x;//set the negatives as origins
        a.y=maxy-a.y;//set the maxy as origins
        printp(orig,a,maxx,maxy);
        break;
      case 1:
        printf("Please input the stardt and end points of your line!\n");
        scanf("%d%d%d%d",&b.str.x,&b.str.y,&b.end.x,&b.end.y);
        b.str.x+=orig.x;
        b.end.x+=orig.x;
        b.str.y=maxy-(b.str.y);
        b.end.y=maxy-(b.end.y);
        //make the upper point represent the start point
        if(b.str.y>b.end.y){
        	a=b.end;
        	b.end=b.str;
        	b.str=a;
		}
        break;
      case 2:
        break;
    }
  }
}
