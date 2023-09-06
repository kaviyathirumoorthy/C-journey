/*Sam is an eligible bachelor. He decides to settle down in life and start a family. He goes bride hunting. He wants to marry a girl who has at least one of the 8 qualities mentioned below:-



1) The girl should be rich.

2) The girl should be an Engineer/Doctor.

3) The girl should be beautiful.

4) The girl should be of height 5.3″.

5) The girl should be working in an MNC.

6) The girl should be an extrovert.

7) The girl should not have spectacles.

8) The girl should be kind and honest.



He is in search of a bride who has some or all of the 8 qualities mentioned above. On bride hunting, he may find more than one contenders to be his wife.



In that case, he wants to choose a girl whose house is closest to his house. Find a bride for Sam who has maximum qualities. If in case, there are more than one contenders who are at equal distance from Sam’’s house; then



print ““Polygamy not allowed””.



In case there is no suitable girl who fits the criteria then print “”No suitable girl found””



Given a Matrix N*M, Sam’s house is at (1, 1). It is denoted by 1. In the same matrix, the location of a marriageable Girl is also denoted by 1. Hence 1 at location (1, 1) should not be considered as the location of a marriageable Girl’s location.



The qualities of that girl, as per Sam’’s criteria, have to be decoded from the number of non-zero neighbors (max 8-way) she has. Similar to the condition above, 1 at location (1, 1) should not be considered as the quality of a Girl. See Example section to get a better understanding.



Find Sam, a suitable Bride and print the row and column of the bride, and find out the number of qualities that the Bride possesses.



NOTE: Distance is calculated in number of hops in any direction i.e. (Left, Right, Up, Down and Diagonal)



Constraints:

2 <= N,M <= 10^2



Input Format:

First Line contains the row (N) and column (M) of the houses.
Next N lines contain the data about girls and their qualities.


Output Format:

It will contain the row and column of the bride, and the number of qualities that Bride possess separated by a colon (i.e. :).



Sample Input 1:

2 9

1 0 1 1 0 1 1 1 1

0 0 0 1 0 1 0 0 1



Sample Output 1:

1:7:3



Explanation:

The girl and qualities are present at (1,3),(1,4),(1,6),(1,7),(1,8),(1,9),(2,4),(2,6),(2,9).

The girl present at (1,3) has 2 qualities (i.e. (1,4)and (2,4)).

The girl present at (1,4) has 2 qualities.

The Bride present at (1,6) has 2 qualities.

The Bride present at (1,7) has 3 qualities.

The Bride present at (1,8) has 3 qualities.

The Bride present at (1,9) has 2 qualities.

The Bride present at (2,4) has 2 qualities.

The Bride present at (2,6) has 2 qualities.

The Bride present at (2,9) has 2 qualities.

As we see, there are two contenders who have maximum qualities, one is at (1,7) and another at (1,8).

The girl who is closest to Sam’s house is at (1,7). Hence, she is the bride.

Hence, the output will be 1:7:3.



Sample Input 2:

6 6

1 0 0 0 0 0

0 0 0 0 0 0

0 0 1 1 1 0

0 0 1 1 1 0

0 0 1 1 1 0

0 0 0 0 0 0



Sample Output 2:

4:4:8



Explanation:

The bride and qualities are present at (3,3),(3,4),(3,5),(4,3),(4,4),(4,5),(5,3),(5,4),(5,5)

The Bride present at (3,3) has 3 qualities (i.e. (3,4),(4,3) and (4,4)).

The Bride present at (3,4) has 5 qualities.

The Bride present at (3,5) has 3 qualities.

The Bride present at (4,3) has 5 qualities.

The Bride present at (4,4) has 8 qualities.

The Bride present at (4,5) has 5 qualities.

The Bride present at (5,3) has 3 qualities.

The Bride present at (5,4) has 5 qualities.

The Bride present at (5,5) has 3 qualities.

As we see, the girl present in (4,4) has the maximum number of Qualities. Hence, she is the bride.

Hence, the output will be 4:4:8.*/



//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
int count=0;
int checksafe(int arr[100][100],int i,int j,int a,int b){
    if(arr[i][j]==0|| (i==1 && j==1)|| i<1 || i>a || j<1 || j>b) return 0;
    return 1;
}
int fun(int arr[100][100],int i,int j,int a,int b){
    //if(checksafe(arr,i,j,a,b)) count++;
    if(checksafe(arr,i-1,j,a,b)) count++;
    if(checksafe(arr,i+1,j,a,b)) count++;
    if(checksafe(arr,i-1,j-1,a,b)) count++;
    if(checksafe(arr,i+1,j+1,a,b)) count++;
    if(checksafe(arr,i,j-1,a,b)) count++;
    if(checksafe(arr,i,j+1,a,b)) count++;
    if(checksafe(arr,i-1,j+1,a,b)) count++;
    if(checksafe(arr,i+1,j-1,a,b)) count++;
    return count;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[100][100];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int val,val1,max=0,flag=0,val2,val3;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){                             /*   2 9.. 1 0 1 1 0 1 1 1 1 ...0 0 0 1 0 1 0 0 1        */
            if(i!=1 && j!=1 && arr[i][j]==1){
                int k=fun(arr,i,j,a,b);
                
                if(k==max){ flag=1; val2=i; val3=j;}
                if(k>max){
                    flag=0;
                    max=k;
                    val=i;
                    val1=j;
                    
                }
                count=0;
            }
        }
    }
    if(val==-1 && val1==-1) printf("Suitable bride is not found");
    else if(flag==0)
    printf("%d:%d:%d",val,val1,max);
    else if (flag==1){
      if((val+val1) >(val2+val3)) printf("%d:%d:%d",val2,val3,max);
      if((val+val1)<(val2+val3)) printf("%d:%d:%d",val,val1,max);
      if((val+val1)==(val2+val3))printf("polygamy is not allowed");
    }
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------





















  
