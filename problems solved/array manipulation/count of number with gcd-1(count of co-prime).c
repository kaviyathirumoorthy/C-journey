#include<stdio.h>
int fun(int a,int b){
if(a==0) return a;
if(b==0) return b;
while(a!=b){
if(a>b) a=a-b;
else b=b-a;
}
return a;
}

int main(){
int a;
scanf("%d",&a);
int arr[a];
int c=0;
for(int i=0;i<a;i++) scanf("%d",&arr[i]);
for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
if(fun(arr[i],arr[j])==1) c++;
}
}
printf("%d",c);
}
