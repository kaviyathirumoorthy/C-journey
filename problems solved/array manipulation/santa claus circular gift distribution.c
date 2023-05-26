#include<stdio.h>
void least_gifted_child(int child,char child_name[],int gifts,char first_gifts[]){
int move[2];
int p=0;
int count[child],i,j;
for(int u=0;u<child;u++) count[u]=0;
for(i=0;i<2;i++){
for(j=0;j<child;j++){
   if(child_name[j]-'A'== first_gifts[i]-'A'){
    move[p]=j;
    p++;
    break;
   }
}
}
if(move[0]<move[1]){      // for clockwise circular 
        int strt=move[0];
printf("Clockwise");
while(gifts!=0){
   if(strt==child){
   strt=0;
   count[strt]++;
   gifts--;
   strt++;
   }
   else{
   count[strt]++;
   strt++;
   gifts--;
   }
   printf("\n");
   for(int i=0;i<child;i++) printf("%d",count[i]);  // prints the values at each distribution
}
int min=0;
for(int i=1;i<child;i++){
if(count[min]>count[i]) min=i;
}
printf("\n%c",child_name[min]);
}
else{                   // for anticlockwise circular
    int strt=move[0];
  printf("Anticlockwise");
while(gifts!=0){
   if(strt==-1){
   strt=child-1;
   count[strt]++;
   gifts--;
   strt--;
   }
   else{
   count[strt]++;
   strt--;
   gifts--;
   }
   printf("\n");
   for(int i=0;i<child;i++) printf("%d",count[i]);

}
int min=0;
for(int i=1;i<child;i++){
if(count[min]>count[i]) min=i;
}
printf("\nMINIMUM GIFTS ARE IN -->%c",child_name[min]);
}
}

int main(){
int child;
scanf("%d",&child);
char child_name[child];
for(int i=0;i<child;i++){
scanf("%c",&child_name[i]);
}
int gifts;
scanf("%d",&gifts);
char first_gifts[2];
for(int i=0;i<2;i++) scanf("%c",&first_gifts[i]);
least_gifted_child(child,child_name,gifts,first_gifts);

}
