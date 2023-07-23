#include<stdio.h>
int main(){
char str[1000];
scanf("%s",str);
for(int i=0;i<str[i]!='\0';i++){
int k=i;
int ans=0;
while(str[i+1]>=48 && str[i+1]<=57){
ans=ans*10+(str[i]-48);
i++;
}
for(int i=1;i<=ans;i++) printf("%c",str[k]);
}
}


