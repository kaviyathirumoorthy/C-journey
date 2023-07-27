#include<stdio.h>
int fun(int a){
if(a==0) return 0;
if(a==1){ printf("*\n"); return 1;}
int count=0;
for(int i=0; ;i++,printf("\n")){
for(int j=0;j<=i;j++){
printf("*");
  a-=1;
  if(a==0) {printf("\n");return count;}
}
count+=1;
}
}

int main(){
  int a;
scanf("%d",&a);
int res=fun(a);
printf("%d",res);
}
