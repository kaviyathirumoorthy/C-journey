#include <stdio.h>
#include<stdlib.h>
long long int maxi_1_mini_2(int *str,int len,int m){
    if(m==1){
        for(int i=1;i<len;i++){
            int j=i;
            while(j>0 && str[j]>str[j-1]){
                int temp=str[j];
                str[j]=str[j-1];
                str[j-1]=temp;
                j--;
            }
        }
    }
    
    if(m==2){
        for(int i=1;i<len;i++){
            int j=i;
            while(j>0 && str[j]<str[j-1]){
                int temp=str[j];
                str[j]=str[j-1];
                str[j-1]=temp;
                j--;
            }
        }
        if(str[0]==0){
            int temp=str[0];
            str[0]=str[1];
            str[1]=temp;
        }
    }
   // for(int i=0;i<len;i++) printf("%d",str[i]);
    int base=10;
    long int val=0;
    printf("\n");
    for(int i=0;i<len;i++){
        val=val*base+str[i];
    }
    printf("%ld",val);
    return val;
    
}
int main(){
   long  long int x=988790;
    //to find max and min -->store each value in array;
     int *arr=(int*) malloc(sizeof(long long int));
     int i=0;
     while(x!=0){
         arr[i++]=x%10;
         x/=10;
     }
     int len=i;
     long long int max=maxi_1_mini_2(arr,len,1);
    long long int min=maxi_1_mini_2(arr,len,2);
     printf("\n%lld",(max-min));
    free(arr);
}


    
