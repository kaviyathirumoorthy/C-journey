#include <stdio.h>

/*question->girl wishes to buy crackers she had only n rupees she have to cmplte her purchase within n rupees how many
ways she can buy the crackers if crackers rate is {1,2,3,5} each element represents the rate of different crackers */
int main()
{
    int n;
    scanf("%d",&n);
    int val=0,count=0,d=2;
    for(int i=0;i<=n;i++){
        if(i<=4) val=i;
        else{
            count++;
            val+=d;
            if(count==2){
                d=d+1;
                count=0;
            }
        }
    }
    printf("%d",val);
    
}
/*here the code follows some number series that is upto upto rs-4 the ways are same but above ,it increases
in some format followed by--->2 2 3 3 4 4 5 5 6 6 7 7..........
therefore if input is 4 output is 4 ,if input is 5 output is 6,if input is 6 output is 8*/
