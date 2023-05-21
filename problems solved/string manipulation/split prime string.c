#include <stdio.h>
#include<string.h>
int value(char *str,int start,int end){
    int base=1,val=0;
    for(int i=start-1;i>=end;i--){
        val+=(str[i]-'0')*base;            // returning the substring number
        base*=10;
    }
    
    return val;
}
int isprime(int val){
    int flag=0;                         // check prime or not
    for(int i=2;i<val;i++){
        if(val%i==0) return 0;
        flag=1;
    }
    if (flag==1)return 1;
    else return 0;
}
int countprimestrings(char *str,int len){
    if(len==0) return 1;
    int count=0;
    for(int i=1;i<7;i++){                                   // to count number of ways 
        int val=value(str,len,len-i);
        if((len-i>=0) && (isprime(val)) &&(value(str,len-i+1,len-i)!=0)){
            count+=countprimestrings(str,len-i);
        }
    }
    return count;
}
int main()
{
    char str[]="11373";
    int len=strlen(str);
    printf("\nnumber of ways->%d",countprimestrings(str,len));
}
