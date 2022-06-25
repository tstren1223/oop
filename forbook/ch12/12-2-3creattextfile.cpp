#include<stdio.h>
int main(){
  FILE *outf;
  int x1,x2;
  outf=fopen("file01.txt","w");
  printf("Enter two integer values: ");
  scanf("%d %d",&x1,&x2);
  fprintf(outf,"%d %d",x1,x2);
  fclose(outf);//close the file
  printf("File file01.txt created.\n");
  return 0;
}
