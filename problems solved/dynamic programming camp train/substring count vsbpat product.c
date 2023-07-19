#include<stdio.h>
#include<string.h>
int substringcountab(int a,int b,int arr[],int val){
int count=0;
for(int i=0;i<val;i++){
if(arr[i]==b) count++;
}
  if(count==1) return 1;
  else return 0;
}
int main(){
int a,b,res=0;
scanf("%d %d",&a,&b);
char str[100];
scanf("%s",str);
// substring store in array
for(int i=0;i<strlen(str);i++){
for(int j=i;j<strlen(str);j++){
int arr[j+1];
int val=0;
for(int k=i;k<=j;k++){
arr[val++]=str[k]+48;
}
res+=substringcountab(a,b,arr,val);
}
}
  printf("%d",res);
}
