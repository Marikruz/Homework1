#include<stdio.h>
void move(int *a,int*b,int n){
  for (int i=0;i<10;++i)
    b[i]=a[(i+n)%10];
  for (int k=0;k<10;++k)
    printf("%d ",b[k]);
}
int main(){
  int a[10];
  int b[10]={0};
  int n;
  scanf("%d",&n);
  for (int i=0;i<10;i++)
    scanf("%d",&a[i]);
  move(a,b,n);
  return 0;
}
