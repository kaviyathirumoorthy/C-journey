#include<stdio.h>
#include<stdlib.h>
int main(){
int a;
int k;
printf("enter 1 to start the game->");
scanf("%d",&k);
printf("enter a number between 0 and 9->");
int count=0;
while(k==1){
printf("enter a number between 0 and 9->");
scanf("%d",&a);
int j=rand()%10;
if(j==a) {printf("My dear lucky charm! here is your gift worth rs-%d",j); count=1; break;}
else {printf("oh lost!\ndid you want to continue again\nif yes press 1 or else press 0->");
    scanf("%d",&k); count=0;
}
}
if(count==1)
printf("\nHave a great day ahead champ!");
else printf("\nIt's just a game! don't lose your hope and try again till you win");
}
// by using rand() create your own luck game
