#include<stdio.h>
int main(){
  void R(void);
  R();
}
void R(void){
  int c;
  c=getchar();
  if (c!='\n'){
    R();
    putchar(c);
  }
}
