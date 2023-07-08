#include<stdio.h>
#include<string.h>
int check(char str[],int start){
    for(int j=0;j<strlen(str);j++){
        for(int k=j+1;k<strlen(str);k++){
            if(str[j]==str[k]) return 0;
        }
    }
    return start;
}
int max(int a,int b){
if(a>b) return a;
else return b;
}

int main(){
char str[100];
scanf("%s",str);
int len,p=0,h;
for(int i=0;i<strlen(str);i++){
for(int j=i;j<strlen(str);j++){
 char arr[j+1];
 int start=0;
for(int k=i;k<=j;k++){
arr[start++]=str[k];
}
h=check(arr,start);
if(h==0){
   h=len;
   }
len=max(p,h);
p=len;
}

}
printf("%d",len);
}
