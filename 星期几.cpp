#include<stdio.h>
int main(){
  char str1[10];
  int str[10];
  for (int j=0;j<10;j++)
    scanf("%c",&str1[j]);
  int y,m,d,n;
  y=(str1[0]-'0')*1000+(str1[1]-'0')*100+(str1[2]-'0')*10+(str1[3]-'0');
  m=(str1[5]-'0')*10+(str1[6]-'0');
  d=(str1[8]-'0')*10+(str1[9]-'0');
  int a[13],i,sum1,sum2,sum;
  sum1=0;sum2=d;sum=0;
  for(i=1900;i<y;i++){
    if(i%4==0&&i%100!=0||i%400==0)
      n=366;
    else n=365;
      sum1=sum1+n; //每年天数和
  }
  if(y%4==0&&y%100!=0||y%400==0)
    a[2]=29;
  else a[2]=28;
  for(i=1;i<=12;i++)
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
      a[i]=31;
    else if(i==4||i==6||i==9||i==11)
      a[i]=30;
  for(i=1;i<m;i++) //每月天数和
    sum2=sum2+a[i];
    sum=sum1+sum2;
  switch(sum%7){
    case 0:printf("Sunday\n");break;
    case 1:printf("Monday\n");break;
    case 2:printf("Tuesday\n");break;
    case 3:printf("Wednesday\n");break;
    case 4:printf("Thusday\n");break;
    case 5:printf("Friday\n");break;
    case 6:printf("Saturday\n");break;
  default:break;
  }
}
