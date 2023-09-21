#include<stdio.h>
int row,col;
void house(int arr[row][col],int strt,int end,int row,int col){
    if(strt<0 || strt>=row|| end<0 || end>=col|| arr[strt][end]==0) return;
    arr[strt][end]=0;
    house(arr,strt-1,end,row,col);
    house(arr,strt+1,end,row,col);
    house(arr,strt,end-1,row,col);
    house(arr,strt,end+1,row,col);

}
int main(){
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int val=0,val1=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          scanf("%d",&arr[i][j]);
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
/*Problem description

The number of houses in a residential society is required for city planning. The top view of the residential society is laid and divided into an N x M grid. If a particular grid cell has some part of the house roof, then it is given a value of 1 are identified as a single house. Diagonally placed grid cells with value 1 are not considered to belong to the same house.

Write an algorithm to find the total number of houses in the society.

Example

Input

5 5

0 0 0 0 0 

0 1 1 0 0

0 0 1 1 0

0 0 0 0 0

0 0 0 0 0

Output

1 

Explanation

There is only one cluster of adjacent grid cells with value 1, thus there is only one house in the society. So, the output is 1.

Input format :
The first line of the input consists of two space-separated integers - Rows and columns, representing the number of rows (N) and the number of columns in the grid (M), respectively.

The next N lines consist of M space-separated integers representing the grid.

Output format :
Print an integer representing the total number of houses.

Code constraints :
0 < rows columns < 500

Note

The elements of the grid consist of 0s and 1s only.

Sample test cases :
Input 1 :
5 5
0 0 0 0 0 
0 1 1 0 0
0 0 1 1 0
0 0 0 0 0
0 0 0 0 0
Output 1 :
1
Input 2 :
5 5
0 0 0 0 0 
0 1 1 0 0
0 0 0 1 0
0 0 0 0 0
0 0 0 0 0
Output 2 :
2*/