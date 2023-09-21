#include<stdio.h>
int row=4,col=5;
void house(int arr[row][col],int strt,int end,int row,int col){
    if(strt<0 || strt>=row|| end<0 || end>=col|| arr[strt][end]==0) return;
    arr[strt][end]=0;
    house(arr,strt-1,end,row,col);
    house(arr,strt+1,end,row,col);
    house(arr,strt,end-1,row,col);
    house(arr,strt,end+1,row,col);

}
int main(){
    //scanf("%d %d",&row,&col);
    int arr[row][col];
    int val=0,val1=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(i%2==0 && j%2==0) arr[i][j]=val;
           else if(i%2!=0 || j%2!=0) arr[i][j]=val1;
           else arr[i][j]=0;
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                    count+=1;
                    house(arr,i,j,row,col);
            }
        }
    }
    printf("%d",count);
}