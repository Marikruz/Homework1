#include<stdio.h>
int main(){
  int n,i,m,t,p,sum=0,max=0,b,c,d,k,s=0;
  int judge(int x),he(int y),ji(int z),ping(int x);
  for (n=100;n<10000;n++){
    if (judge(n)==0){//����Ϊ���� 
      if (n%1000==n){//��λ�� 
		if (judge(he(n))==0 && judge(ji(n))==0 && judge(ping(n))==0){
		  max=n;
          sum+=1;
          s+=n;
        }
        else max=max;
      }  
      else{//��λ�� 
      	if (judge(he(n))==0 && judge(ji(n))==0 && judge(ping(n))==0){
      	  max=n;
      	  sum+=1;
      	  s+=n;
      	}
      	else max=max;
      }
	}
    else max=max;
  }
  printf("���������ĸ�����%d\n���г�������֮����%d\n���ĳ���������%d\n",sum,s,max);
  return 0;
}
int judge(int x){
  int i,a,sum=0;
  for (i=2;i<x;i++){
  	a=x%i;
    if (a==0)
      sum+=1;
  }
  return sum;
}
int ji(int z){
  int t,s=1;
  while(z){
    t=z%10;
    s*=t;
    z/=10;
  }
  return s;
}
int he(int y){
  int t,s=0;
  while(y){
    t=y%10;
    s+=t;
    y/=10;
  }
  return s;
}
int ping(int x){
  int t,s=0;
  while(x){
	t=x%10;
	s+=t*t;
	x/=10;
  }
  return s;
}
