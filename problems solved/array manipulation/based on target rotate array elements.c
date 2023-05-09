//input1- count of input array elements---->num
//input2- array elements
//input3- target
// sample input num-4, array elements- 1 2 3 4, target-3
// sample output- 3 2 1 4

#include<stdio.h>
#include<stdlib.h>
void *rotate(int *arr,int end,int start,int size){
    int new[size];
    int j=0;
    for(int i=end;i>=start;i--){
        new[j]=arr[i];
        j++;
    }
    j=0;
    for(int k=start;k<=end;k++){
        arr[k]=new[j];
        j++;
    }
}
int main(){
    int num;
    int target;
    printf("size->");
    scanf("%d",&num);
    int arr[num];
    printf("\n array->");
    for(int i=0;i<num;i++) scanf("%d",&arr[i]);
    printf("\n target->");
    scanf("%d",&target);
    printf("\n");
    int start=0,count=0;
    for(int i=0;i<=num;i++){
        count++;
        if(count==target && arr[i]!='\0'){
            rotate(arr,i,start,target);
            count=0;
            start=i+1;
        }
        else if(count<target && arr[i]=='\0'){
            rotate(arr,i,start,target);
        }
    }
    for(int i=0;i<num;i++) printf("%d ",arr[i]);

}
