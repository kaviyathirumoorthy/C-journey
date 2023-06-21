//leetcode-29-remove element
#include<stdio.h>
#include<stdlib.h>
int remove_element(int *arr,int n,int val){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=val) arr[i-count]=arr[i];
        else count++;
    }
    return n-count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int val;
    scanf("%d",&val);
    int count=remove_element(arr,n,val);
    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    
}
