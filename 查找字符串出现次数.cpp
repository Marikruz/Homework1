#include<stdio.h>
#include<string.h>
int main(){
  int n;
  int findingString(char stringArray[][100],char *targetString,int n);  
  scanf("%d",&n);
  char stringArray[10][100];
  char targetString[100];
  for (int i=0;i<n;i++)
    scanf("%s",&stringArray[i]);
  scanf("%s",&targetString);
  findingString(stringArray,targetString,n);
  return 0;
}
int findingString(char stringArray[][100],char *targetString,int n){
  int len,lenth,t,sum=0;;
  len=strlen(targetString);
  for (int i=0;i<n;i++){
    lenth=strlen(stringArray[i]);
    if (lenth<len){
      sum+=0;
	}
	else
	  t=strcmp(stringArray[i],targetString);//strcmp是库里的函数，可以直接调用 
    if (t==0)
      sum+=1;
    else
      sum+=0;
  }
  printf("%d",sum);
}
