#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void insert(){
    int item;

    if(rear==max-1){
        printf("queue is full");
    }
    else{
        printf("enter element");
        scanf("%d",&item);

        if(front==-1)
           front=0;
        rear++;
        queue[rear]=item;
    }
}
void delete(){
       if(front==-1 || front>rear){
        printf("queue is empty");
       }
       else{
          printf("deleted element is %d",queue[front]);
          front++;
          if(front>rear){
            front=-1;
            rear=-1;
          }
       }
}
void display(){
      printf("elements: ");
      for(int i=front; i<=rear;i++){
        printf(" %d",queue[i]);
      }
}
int main(){
    int choice;
    printf("1.add");
    printf("2.delete");
    printf("3.display");
    printf("exit");

    while(1){
        printf("enter choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
                case 4:
                    return 0;
            default:
                printf("enter valid choice");
                
        }
    }
}