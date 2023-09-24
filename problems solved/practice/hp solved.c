//hp first round coding questions and answers in c
/*given a input and check whether the sum -input+reverse(input) palindrome or not if it not then addthe
resultant+reverse(resultant) until the result becomes palindrome if it becomes palindrome then
return that result which is palindrome number*/
/*#include<stdio.h>
int rev(int a){
    int m=0;
    while(a!=0){
        m=m*10+(a%10);
        a/=10;
    }
    return m;
}
int palindrome(int a){
    int k=rev(a);
    if(k-a) return 0;
    else return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int k=rev(a)+a;
    while(!(palindrome(k))){
        k=rev(k)+k;
    }
    printf("%d",k);
}*/
/*two inputs are given one is limit upto prime number and other is threshold value when that value 
exceeds it prints the excedded value at which point of index*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int a,b,p=-1,arr[a];
    scanf("%d %d",&a,&b);
    for(int i=2;i<a;i++ ){
        int flag=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){ flag=0; break;}
        }
        if(flag==1) arr[++p]=i;
    }
    int sum=0,k=0;
    while(sum<b){
        sum+=arr[k++];
    }
    printf("%d",--k);
    
}*/
/*given the input string and find the number of letters in each word of string is consequent*/
/*#include<stdio.h>
#include<string.h>
int check_lexi(char *str){
    int count=0;
    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]+1==str[i+1]) count++;
    }
    return count;
}
int main(){
    char str[100];
    int k=0;
    scanf("%[^\n]s",str);
    char *token= strtok(str," ");
    while(token!=NULL){
        printf("%d",check_lexi(token));
        token=strtok(NULL," ");
    }
    
}*/
