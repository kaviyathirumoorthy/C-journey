
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int removeduplicates(char *str){
    bool uniquechar[256]={false};
    int current_index;
    int i;
    for(i=0;i<strlen(str);i++){
        char current_char=str[i];
        if(!uniquechar[current_char]){
            uniquechar[current_char]=true;
            str[current_index++]=current_char;
        }
    }
    str[current_index]='\0';
    return 0;
}

int main()
{
    char str[100]="123456778";
    removeduplicates(str);
    printf("%s",str);
}
