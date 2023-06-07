#include <stdio.h>
#include<string.h>
int min(int a,int b,int c){
    if(a<b && a<c) return a;
    if(b<a && b<c) return b;
    if(c<a && c<b) return c;
}
int checkdistance(char str[],char str1[],int len,int len1){
    if(len==0) return len1;//update str with count of str1
    if(len1==0) return len;//delete the str counts to equalize str1 
    if(str[len-1]==str1[len1-1]) return checkdistance(str,str1,len-1,len1-1);
    return 1+min(checkdistance(str,str1,len-1,len1),checkdistance(str,str1,len,len1-1),checkdistance(str,str1,len-1,len1-1));
}
int main()
{
    char str[100];
    char str1[100];
    scanf("%s %s",str,str1);
    int len=strlen(str);
    int len1=strlen(str1);
    int count=checkdistance(str,str1,len,len1);
    printf("%d",count);
}
/* if string 1 is cat and string 2 is cut then answer is 1 because index 1 in str1 has to be remove and replaced (count++)---->no variations again occurs o/p=1
if string 1 is saturday and string 2 is sunday  to convert string 1 to string 2 .....>
1.check the len of str1 and str2 if any one is zero then return the lenghth of other string
2.if str[len-1]=str1[len1-1] then move to next index
3. check for the remove ,update ,remove & replace operation and return the minimum of it to the output8/
