#include<stdio.h>
int main(){
  int n,bigger=0,smaller=0,t=0,sum=0;
  scanf("%d",&n);
  int a[n],b[n];
  for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
  for (int i=0;i<n;i++){
  	for (int j=0;j<n;j++){
      if (a[j]>a[i])
        bigger+=1;
      else{
      	if (a[j]<a[i])
      	  smaller+=1;
      	else
      	  bigger+=0;
	  }
	}
	if (bigger==smaller){
	  b[t]=a[i];
	  t+=1;
	}
	else
	  t+=0;
	bigger=0;
	smaller=0;
  }
  if (t==0)
    printf("%d",-1);
  else{
  	if (t==1)
  	  printf("%d",b[0]);
  	else{
  	  for (int k=0;k<t;k++)
  	    for (int j=k+1;j<t;j++){
  	      if (b[j]==b[k]){
  	      	for (int i=j;i<t;i++)
  	      	  b[i]=b[i+1];
  	      	  sum+=1;
		  }	      
		}
	  for (int i=0;i<t-sum;i++)
	    printf("%d ",b[i]);
	}
  }
  return 0;
}
