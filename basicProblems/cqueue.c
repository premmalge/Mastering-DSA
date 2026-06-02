#include<stdio.h>
#define max 10
char queue[max];
int front=-1;
int rear=-1;
int size=0;
void full(){
   if(size==max)
     printf("queue is full");
}

void empty(){
    if(size==0){
        printf("queu is empty");
    }
}
void insert(){
    int item;
    if(size==max){
        printf("queu is full");
    }
    printf("enter element");
    scanf("%d",item);
    
    if(front==-1)
       front=0;
    
    rear=(rear+1)%max;
    queue[rear]=item;
    size++;

}
void delete(){
    if(size==0){
        printf("queue is empty");
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
       front=(front+1)%max;
    }
    size--;
}
void display(){
  int i=front;
  int count=0;
  while(count<size){
    printf("%c",queue[i]);
    i=(i+1)%max;
    count++;
  }
}

int main(){
    int choice;
    printf("1.add");
    printf("2.delete");
    printf("3.display");
    printf("4.full");
    printf("5.empty");
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
                  full();
                  break;
            case 5:
                 empty();
                 break;
            case 6:
                return 0;
            default:
                printf("enter valid choice");
                
        }
    }
}