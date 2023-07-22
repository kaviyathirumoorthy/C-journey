#include<stdio.h>
int flag=0;
int safe(int n,int m,int i,int j,int arr[n][m]){
if(i==-1||j==-1||i==n||j==m||arr[i][j]==0||arr[i][j]==2) return 0;
else return 1;

}
void solve(int n,int m,int i,int j,int arr[n][m]){
if(arr[i][j]==9) {flag=1; }
else {
arr[i][j]=2;
if(safe(n,m,i-1,j,arr)){
solve(n,m,i-1,j,arr);
}

if(safe(n,m,i,j-1,arr)){
solve(n,m,i,j-1,arr);
}
if(safe(n,m,i+1,j,arr)){
solve(n,m,i+1,j,arr);
}
if(safe(n,m,i,j+1,arr)){
solve(n,m,i,j+1,arr);
}


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
solve(n,m,0,0,arr);
printf("%d",flag);

}
