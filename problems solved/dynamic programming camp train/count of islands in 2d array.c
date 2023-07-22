#include<stdio.h>
void checkisland(int n,int m,int i,int j,int arr[n][m]){
if(i==-1||j==-1||arr[i][j]!=1||i==n||j==m) return;
else{
arr[i][j]=2;
checkisland(n,m,i-1,j,arr);
checkisland(n,m,i,j-1,arr);
checkisland(n,m,i+1,j,arr);
checkisland(n,m,i,j+1,arr);

}


}
int main(){
int n,m;
scanf("%d %d",&n,&m);
int arr[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);
}
}
int c=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(arr[i][j]==1){
 checkisland(n,m,i,j,arr);
 c+=1;
}

}


}
printf("%d",c);

}
