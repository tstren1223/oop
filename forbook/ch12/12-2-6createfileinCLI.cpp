#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *testf;
  char *fn;
  char ch;
  printf("Enter the file name: ");
  //gets(fn);//wrong!No memory allocation for fn
  fn = new char [80];//allocating memory for fn
  fgets(fn,79,stdin);//then we can use fn to store the string
  testf = fopen(fn,"w");
  if(testf==NULL){
    puts("Can not open file.\n");
    exit(1);
  }
  while((ch=getc())!=EOF)//Ctrl-Z;Ctrl-D;
  //while((ch=getche())!=26) //OK//Ctrl-Z
  {//stdin:keyboard
    if(ch!='\r')
      putc(ch,testf);
    else{
      //Write the new line character to the file.
      putc('\n',testf);
    }
  
  }
  fclose(testf);
  return 0;
}
