//remove duplicates----it is for numbers in array also it can be used for string by small changes in getting input as string
#include <stdio.h>
#include<string.h>
int main()

{
    int n=10;
    int str[n];
    for(int i=0;i<n;i++) scanf("%d",&str[i]);
    
    int len=n;
    int tail=1;
    for(int i=1;i<len;i++){
        int j;
        for(j=0;j<tail;++j){
            if(str[i]==str[j]){
                break;
            }
        }
        if(j==tail){
            str[tail]=str[i];
            ++tail;
        }
    }
    str[tail]='\0';
    len=tail;//for string this len need not to be assigned 
    printf("time complexity will be equal to length of string);
    for(int i=0;i<len;i++) printf("%d",str[i]);
    
    
}
