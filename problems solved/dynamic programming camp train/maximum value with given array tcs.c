/*if input1= 6
input2=3 97 56 34 330 9
output=9 97 56 34 3 330 
solve-->
3 97<97 3 then swap both elements in array ==>97 3 56 34 330 9
97 56>56 97 then no change
97 34> 34 97 then no change..............
330 3 <3 330  then swap both elements in arrayy===>9 97 56 34 3 330

  */
#include<stdio.h>
#include<stdlib.h>
int solve(int n1,int n2){
int a=n1,b=n2,c1=0,c2=0;
while(n1>0){
n1/=10;
c1++;
}
while(n2>0){
n2/=10;
c2++;
}
int a1=a*pow(2,c2)+b;
  int a2=b*pow(2,c1)+a;
  if(a2>a1) return 1;
  else return 0;
}
int main(){
  int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<a;i++){
for(int j=i+1;j<a;j++){
if(solve(arr[i],arr[j])==1){
 arr[i]=arr[j]+arr[i]-(arr[j]=arr[i]);
}
}
}
}

