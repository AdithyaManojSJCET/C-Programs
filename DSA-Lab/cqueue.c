#include <stdio.h>

int main(){
  int max, i;
  printf("\nEnter the Size of the array: ");
  scanf("%d",&max);
  int a[max];
  int front=-1, rear=-1;
  int item,choice;
  

  if (max>0){
    front=0;
    rear=max-1;
  }
  
  while(1){
    printf("\nMenu\n");
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.Exit\n");

    printf("Enter your Choice:");
    scanf("%d",&choice);
    
    if (choice == 1) {
      if((rear + 1) % max == front){
        printf("Queue is full. Cannot enqueued\n");
      }
      if (!((rear + 1) % max ==front)) {
        printf("Enter Item to Enqueue: ");
        scanf("%d",&item);
        rear = (rear+1) % max;
        a[rear] = item;
        if (front == -1) {
          front=0;
        }
        printf("Item Enqueue: %d\n",item);
      }
    }
    
    if (choice == 2){
      if (front==-1){
        printf("Queue is empty. Cannot Dequeue.\n");
      }
      if (!(front == -1)){
        item=a[front];
          printf("Item dequeued: %d\n",item);
          if (front == rear){
            front = rear = -1;
          }
          else{
            front=(front+1)%max;
          }
        }
      }
      if (choice == 3){
        if (front == -1){
          printf("Queue is Empty");
        }
        if(!(front == -1)){
          printf("Queue Elements: ");
          i = front;
          while (1){
            printf("%d ",a[i]);
            if(i == rear)
            break;
          i= (i+1) % 10;
        }
        printf("\n");
      }
    }
    
    if(choice == 4) {
      printf("Exiting Program....\n");
      break;
    }
    
    if(choice < 1 || choice > 4){
      printf("Invalid input. Try again.\n");
    }
  }
  return 0;
}
