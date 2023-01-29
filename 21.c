#include <stdio.h>
#define SIZE 100
void enqueue(int);
void display();
int items[SIZE], front = -1, rear = -1;
int main() {
  int n,data,i;
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
scanf("%d",&data);
      enqueue(data);
      display();
  }
  return 0;
}
void enqueue(int data) {
  if (rear == SIZE - 1)
printf("Queue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = data;
printf("Enqueuing %d\n", data);
  }
}
void display() {
  if (rear == -1)
printf("\nQueue is Empty!!!");
  else {
    int i;
    for(i=front;i<=rear;i++)
printf("%d ", items[i]);
  }
}
