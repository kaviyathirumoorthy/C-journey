#include<stdio.h>
int min(int c[],int len){
    int mini=c[0];
  for(int i=0;i<len;i++){
    if(mini>c[i]) mini=c[i];
  }
  return mini;

}
int main(){
int a=1214,b=3268,c=1633;
int res=0;
int k[3];
while(a!=0){
 k[0]=a%10;
 k[1]=b%10;
 k[2]=c%10;
res=(res*10)+min(k,3);

}
int res1=0;
while(res>0){
  res1=(res1*10)+(res%10);
  res/=10;
}
printf("%d",res1);


}
