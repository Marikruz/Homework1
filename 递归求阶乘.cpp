#include<stdio.h>
int main(){//��1��m��ÿ�����Ľ׳�֮�� 
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
