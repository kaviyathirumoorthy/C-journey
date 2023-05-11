/*1035.uncrossed lines in leetcode-->this is the begineer friendly approach to solve this problem and is called recursive approach 
it will not completely pass the testcases in leetcode as it shows time limit exceeds.The best approach to use id Dynamic approach*/


#include <stdio.h>
#include<math.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int maxUncrossedLines(int* nums1, int nums1Size, int* nums2, int nums2Size){
 if(nums1Size==0||nums2Size==0) return 0;
 else if(nums1[nums1Size-1]==nums2[nums2Size-1]){
     return 1+(maxUncrossedLines(nums1,nums1Size-1,nums2,nums2Size-1));
 }
 else{
     return(max(maxUncrossedLines(nums1,nums1Size-1,nums2,nums2Size)
     ,maxUncrossedLines(nums1,nums1Size,nums2,nums2Size-1)));
 }
}
 
int main(){
    int a[]={6,5,4,3,2,1,6,5,4,3,2,1};
    int b[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    int k=maxUncrossedLines(a,size1,b,size2);
    printf("%d",k);
}
