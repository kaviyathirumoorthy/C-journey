#include <stdio.h>
#include<stdlib.h>
int **rotation(int **arr,int n){
    int **rotate1=(int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++) rotate1[i]=(int*) malloc(sizeof(int)*n);
    int row1=0;
    for(int i=n-1;i>=0;i--){
        int col1=0;
        for(int j=n-1;j>=0;j--){
            rotate1[row1][col1]=arr[i][j];     // clockwise 180 degree rotation
            col1++;
        }
        row1++;
    }
    return rotate1;
}
void printrotate(int **arr,int n){
    for(int i=0;i<n;i++,printf("\n")){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
    }
}

void freematrix(int**arr,int n){
    for(int i=0;i<n;i++){
        free(arr[i]);
    }

}


int main()
{
    int n;
    scanf("%d",&n);
    int **arr= (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        arr[i]=(int*) malloc(sizeof(int)*n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int **rotate=rotation(arr,n);
    printrotate(rotate,n);
    freematrix(arr,n);
    freematrix(rotate,n);
    return 0;
}
