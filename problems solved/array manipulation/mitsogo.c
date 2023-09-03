/*
void replaceCharacter(string str, char ch1, char ch2); 

The function accepts a string ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments. Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in the original string are replaced by ‘ch2’ and all occurrences of ‘ch2’ in the original string are replaced by ‘ch1’. 

Assumption

String Contains only lower-case alphabetical letters. 

Note

Return null if the string is null. 
If both characters are not present in the string or both of them are the same, then return the string unchanged. 
Example

Input

Str: apples 

ch1:a 

ch2:p 

Output

paales 

Explanation

‘a’ in the original string is replaced with ‘p’ and ‘p’ in the original string is replaced with ‘a’, thus output is paales. 

Input format :
The first input is the string.

The next two char inputs are ch1 & ch2 respectively.



Output format :
Output is the modified string.

Sample test cases :
Input 1 :
apples 
a p
Output 1 :
paales 
Input 2 :
iamneo 
i n 
Output 2 :
namieo */
/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void replace(char *str,char ch1,char ch2){
    int len=sizeof(str)/sizeof(str[0]);
    char *str1=(char*)malloc(sizeof(char)*len);
    for(int i=0;i<len;i++){
        if(str[i]==ch1) str1[i]=ch2;
        else if(str[i]==ch2) str1[i]=ch1;
        else str1[i]=str[i];
    }
    if(strcmp(str1,str)==0) printf("No changes in the string");
    else{ strcpy(str,str1);
    printf("%s",str1);
    }
    free(str1);
}
int main(){
    char str[100];
    scanf("%s",str);
    char ch1,ch2;
    scanf("\n%c %c",&ch1,&ch2);
    replace(str,ch1,ch2);
}*/
/*
An art therapist conducts a workshop to teach the importance of colors in every aspect of life. According to her, the priority of each problem/situation is unique. So it is important to prioritize our problems and solve them level by level.

For demonstrating this, she gave sheets to every participant and access to an unlimited number of colored pencils. Each sheet had concentric squares of varied sizes. The participants were asked to color the squares in each sheet with different colors. Suppose a participant got a sheet of 5 squares, he/she has to use 5 colors.

Write a code to implement this pattern.

Input format :
Single line input which has a positive integer.

Output format :
The output displays the concentric squares as shown in the sample test case.

Sample test cases :
Input 1 :
6
Output 1 :
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6 
*/
/*#include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
  	int row=n+(n-1);
      int col=n+(n-1);
      int sc=0,sr=0,ec=col-1,er=row-1;
      int arr[row][col];
      while(n!=0){
          for(int i=sc;i<=ec;i++){
              arr[sr][i]=n;
          }sr+=1;
          for(int i=sr;i<=er;i++){
              arr[i][ec]=n;
          }ec-=1;
          for(int i=ec;i>=sc;i--){
              arr[er][i]=n;
          }er-=1;
          for(int i=er;i>=sr;i--){
              arr[i][sc]=n;
          }sc+=1;
          
         n=n-1; 
         for(int i=0;i<row;i++,printf("\n")){
          for(int j=0;j<col;j++){
              printf("%d ",arr[i][j]);
          }
      }
      printf("\n");
      }
      for(int i=0;i<row;i++,printf("\n")){
          for(int j=0;j<col;j++){
              printf("%d ",arr[i][j]);
          }
      }
    return 0;
}
*/
/*Problem statement

A Factorial of a non-negative integer 'n', denoted by 'n!', is the product of all positive integers less than or equal to 'n'. 

You are required to implement the following function

int sumfactorialdigits(int n);

The function accepts a positive integer 'n' as its argument. You are required to calculate the sum of the factorial of all the digits of a number 'n', and return the same.

Note:

0!=1
n>=0
Input format :
Input integer is the value of n.

Output format :
Output integer is the sum of the factorial of digits in the given number.

Sample test cases :
Input 1 :
124
Output 1 :
27
Input 2 :
267
Output 2 :
5762*/

/*#include<stdio.h>
int fact(int a){
    if(a==0) return 1;
    return a*fact(a-1);
}
int main(){
    int a,sum=0;
    scanf("%d",&a);
   while(a!=0){
       sum+=fact(a%10);
       a/=10;
   }
   printf("%d",sum);
}*/

/*A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right. You are required to implement the following function:



int Numberofcarries(int num1,int num2);



The function accepts two numbers 'num1' and 'num2' as its arguments.You are required to calculate and return the total number of carries generated while adding digits of two numbers 'num1' and 'num2'.



Assumption: num1,num2>=0 

Input format :
The two input integers are the values of num1 & num2 respectively.

Output format :
Output integer is the number of carry operations.

Sample test cases :
Input 1 :
451
349
Output 1 :
2
Input 2 :
555
555
Output 2 :
3 */
/*
#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1<num2){
        num1=num1+num2-(num2=num1);
    }
    int carry=0,carrycount=0;
    while(num1!=0){
        int sum=(num1%10)+(num2%10)+carry;
        if(sum>9){
            carry=1;
            carrycount+=1;
        }
        else carry=0;
        num1/=10,num2/=10;
    }
    printf("%d",carrycount);
}*/
