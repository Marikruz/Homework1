#include<stdio.h>
int main(){ 
  int n,m,length,temp;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%d",&m);
    length=m;
    int a[m+1];
    for (int j=0;j<m;j++)
      scanf("%d",&a[j]);
    for (int p=1;p<=length;p++){
      for (int q=0;q<m-1;q++){
      	if (a[q]>a[q+1]){
      	  temp=a[q];
		  a[q]=a[q+1];
	      a[q+1]=temp;	
		}
	  }
	}
	if (m==1)
	  printf("ERROR\n");
	else{
	  for (int t=1;t<m;t++)
        if (a[t]>a[0]){
          printf("%d\n",a[t]);
          break;
	    }
        else{
          if (t!=m-1)
	  	    a[t]=0;
          else
		    printf("ERROR\n");
        }	
	}
  }
  return 0;
}
