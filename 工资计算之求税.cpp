#include<stdio.h>
int main(){
  int n;
  float t;
  scanf("%d",&n);
  if (n<=3500)
    t=0;
    else if (n>3500 && n<=5000)
      t=(n-3500)*0.03;
      else if (n>4500 && n<=8000)
        t=45+(n-5000)*0.1;
        else if (n>8000 && n<=12500)
          t=345+(n-8000)*0.2;
		  else if (n>12500 && n<=38500)
		    t=1245+(n-12500)*0.25;
			else if (n>38500 && n<=58500)
			  t=7745+(n-38500)*0.3;
			  else if (n>58500 && n<=83500)
			    t=13745+(n-58500)*0.35;
				else if (n>83500)
				  t=22495+(n-83500)*0.45; 
  printf("%.2f",t);
  return 0;
}
