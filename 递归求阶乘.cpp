#include<stdio.h>
int main(){//求1到m的每个数的阶乘之和 
  int m,s;
  int Func(int n);
  scanf("%d",&m);
  int i=1;
  while(i<=m){
    s+=Func(i);  	
    i++;
  }
  printf("%d\n",s);
  return 0;
}
int Func(int n){
  int sum=0;
  if (n>1)
    return n*Func(n-1);
  else{
    return 1;
  } 
}
