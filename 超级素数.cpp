#include<stdio.h>
int main(){
  int n,a[9900],i,m,t,p,sum=0,max=0,b,c,d,k,s=0;
  int judge(int x),he1(int y),ji1(int z),ping1(int q),he2(int e),ji2(int f),ping2(int g);
  for (i=0;i<9900;i++)
    a[i]=0;
  for (n=100;n<10000;n++){
    if (judge(n)==0){//本身为素数 
      if (n%1000==n){//三位数 
        m=he1(n);
        t=ji1(n);
        p=ping1(n);
		if (judge(m)==0 && judge(t)==0 && judge(p)==0){
		  max=n;
          sum+=1;
          a[n]=n;
        }
        else max=max;
      }  
      else{//四位数 
      	b=he2(n);
      	c=ji2(n);
      	d=ping2(n);
      	if (judge(b)==0 && judge(c)==0 && judge(d)==0){
      	  max=n;
      	  sum+=1;
      	  a[n]=n;
      	}
      	else max=max;
      }
	}
    else max=max;
  }
  for (k=0;k<9900;k++){
    s+=a[k];
  }
  printf("超级素数的个数是%d\n",sum);
  printf("所有超级素数之和是%d\n",s+1);
  printf("最大的超级素数是%d\n",max);
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
int he1(int y){
  int ge,shi,bai,he;
  ge=y%10;
  shi=((y-ge)/10)%10;
  bai=(y-ge-shi*10)/100;
  he=ge+shi+bai;
  return he;
}
int ji1(int z){
  int ge,shi,bai,ji;
  ge=z%10;
  shi=((z-ge)/10)%10;
  bai=(z-ge-shi*10)/100;
  ji=ge*shi*bai;
  return ji;
}
int ping1(int q){
  int ge,shi,bai,ping;
  ge=q%10;
  shi=((q-ge)/10)%10;
  bai=(q-ge-shi*10)/100;
  ping=ge*ge+shi*shi+bai*bai;
  return ping;
}
int he2(int e){
  int ge,shi,bai,qian,he;
  ge=e%10;
  shi=((e-ge)/10)%10;
  bai=((e-ge-shi*10)/100)%10;
  qian=(e-ge-shi*10-bai*100)/1000;
  he=ge+shi+bai+qian;
  return he;
}
int ji2(int f){
  int ge,shi,bai,qian,ji;
  ge=f%10;
  shi=((f-ge)/10)%10;
  bai=((f-ge-shi*10)/100)%10;
  qian=(f-ge-shi*10-bai*100)/1000;
  ji=ge*shi*bai*qian;
  return ji;
}
int ping2(int g){
  int ge,shi,bai,qian,ping;
  ge=g%10;
  shi=((g-ge)/10)%10;
  bai=((g-ge-shi*10)/100)%10;
  qian=(g-ge-shi*10-bai*100)/1000;
  ping=ge*ge+shi*shi+bai*bai+qian*qian;
  return ping;
}
