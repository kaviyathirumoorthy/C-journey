// given an array of size n and window size to find the maximum difference of maximum and minimum of each window of size given
//the below solved in normal method. to solve it in avl tree method is the question by interviewer

#include <stdio.h>
#include<stdlib.h>
int maximum(int *arr,int n,int win){
    int maxdiff=0;
    for(int i=0;i<=n-win;i++){
        int maxi=arr[i];
        int mini=arr[i];
        for(int j=i;j<i+win;j++){
            if(arr[j]>maxi) maxi=arr[j];
            if(arr[j]<mini) mini=arr[j];
        }
        int diff=maxi-mini;
        if(diff>maxdiff) maxdiff=diff;
        
    }
    return maxdiff;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int*) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int window;
    scanf("%d",&window);
    int max=maximum(arr,n,window);
    printf("%d",max);
    free(arr);
}
