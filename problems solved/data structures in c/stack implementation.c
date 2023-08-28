//creating a linked list 
//where all inputs are stored as last in first out-stack
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*head=NULL;
struct node*createinsert(int data1){
    struct node* new_node=(struct node*) malloc(sizeof(struct node));
    if(new_node==NULL) {printf("Memory is not allocated\n"); return NULL;}
    else{
        new_node->data=data1;
        new_node->prev=NULL;
        new_node->next=head;
        if (head != NULL) {
            head->prev = new_node;
        }
        head = new_node;
        printf("data %d inserted successfully\n",data1);
        return new_node; 
}
}
struct node*removedata(){
    if(head==NULL) { printf("the stack is empty\n"); return NULL;}
    else{
        struct node *tofree=NULL;
        tofree=head;
        head=(head)->next;
       if (head != NULL) {
            head->prev = NULL;
        }
        free(tofree);
    printf("Last inserted element is deleted\n");

    }
}
void display() {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main(){
   printf("Stack implementation") ;
   while(1){
   printf("1.print 1 to insert\n2.print 2 to delete\n3.print -1 to finish insert and delete operations\n\n");
   int a;
   scanf("%d",&a);
       if(a==1){
           int data;
           scanf("%d",&data);
           createinsert(data);
           }
       if(a==0){
           removedata();
       }
       if(a==-1) break;
       
   }
   int a;
   printf("\n\nTo display elements in final stack print 1, else to finish print -1:");
   scanf("%d",&a);
   if(a==1) display();
   else return 0;
   
}
