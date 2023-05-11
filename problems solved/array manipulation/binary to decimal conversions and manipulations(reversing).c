#include <stdio.h>
#include<math.h>
int binary(int a)
{

    int sum=0,base=1;    //printing  binary
    while(a!=0){
        int mod=a%2;
        sum+=(base*mod);
        a/=2;
        base*=10;
    }
    printf("binary-->%d\n",sum);
}
int main(){
    int a;
    scanf("%d",&a);         // printing reverse of binary
    int arr[50],i=0;
    binary(a);
    while(a!=0){
        arr[i++]=a%2;
        a/=2;
    }
    printf("reverse-->");
    for(int j=0;j<i;j++) printf("%d",arr[j]);
    int base=0,sum=0;
    for(int j=i-1;j>=0;j--){
        sum+=(pow(2,base)*arr[j]);
        base+=1;
    }
    printf("\nreverse val-->%d",sum);
}

/*int main(){
    long int a;
    scanf("%ld",&a);
    int mod,base=0,sum=0;
    while(a!=0){
        mod=a%10;                       //binary to decimal
        sum+=(pow(2,base)*mod);
        a/=10;
        base+=1;
    }
    printf("%d",sum);
}*/
