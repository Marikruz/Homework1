#include<stdio.h>
int main(){
  int t;
  float s;
  scanf("%d",&t);
  if (t<=3500 && t>=1)
    s=t;
    else if (t>3500 && t<=4955)
      s=(t-105)/0.97;
      else if (t>4955 && t<=7655)
        s=(t-455)/0.9;
        else if(t>7655 && t<=11255)
          s=(t-1255)/0.8;
          else if(t>11255 && t<=30755)
            s=(t-1880)/0.75;
			else if(t>30755 && t<=44755)
			  s=(t-3805)/0.7;
			  else if(t>44755 && t<=61005)
			    s=(t-6730)/0.65;
				else if(t>61005)
				  s=(t-15080)/0.55;
  printf("%.0f\n",s);
  return 0;
}
