#include <stdio.h>
// to print the sum of array arroud (p,k) not including p,k
int main()
{
    int m=3,n=4;
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p=2,k=2,sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<=p+1 && j<=k+1 && i>=p-1 && j>=k-1){
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum-arr[p][k]);
}
