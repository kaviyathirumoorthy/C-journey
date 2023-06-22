// leetcode-714
#include <stdio.h>
#include<stdlib.h>
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int calculatemaximum_profit(int *arr,int n,int expe){
    //creating the loss and profit variable
    int loss=-arr[0];//loss variable defines the loss when holding the stock
    int profit=0;// profit variable defines the profit earned when the stock is not in hold=initially profit is zero
    for(int i=1;i<n;i++){
        int temp=loss;//to store the previous loss for the profit operations to be performed in step-profit
        loss=max(loss,profit-arr[i]);// there are two options to hold /replace the hold with less loss
        profit=max(profit,temp+arr[i]-expe);
        //there are two operations to free the stock and get more profit than previous or to hold the previous profit itself
        
    }
    return profit;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int expense;
    scanf("%d",&expense);//it is the expense to trasmitting the stock
    int val=calculatemaximum_profit(arr,n,expense);
    printf("%d",val);
    free(arr);
    return 0;
}
