#include<stdio.h>
int main(){
  int s=0,x=0;
  do{
    s+=x;
    x+=1;
  }while(x<101);
  printf("%d ",s);
  return 0;
}

