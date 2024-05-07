# include<stdio.h>
# include<stdlib.h>
# define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert_front(int);
void insert_rear(int);
void delete_front();
void delete_rear();
void display();
int main() {
	int choice,item;
	char ch;
	while(1) {
		printf("\nMENU\n");
		printf("1.insert_front\n");
		printf("2.insert_rear\n");
		printf("3.delete_front\n");
		printf("4.delete_rear\n");
		printf("5.display\n");
		printf("6.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:printf("enter the element to be inserted at front:");
				scanf("%d",&item);
				insert_front(item);
				break;
			case 2:printf("enter the element to be inserted at rear :");
				insert_rear(item);
				break;
			case 3:delete_front();
				break;
			case 4:delete_rear();
				break;
			case 5:display();
				break;
			case 6:exit(0);
			default:printf("invalid choice:");
		}
	}
}
void insert_front(int item) {
	if((rear+1)%MAX==front)
	printf("dequeue is full\n");
	else if(front==-1) {
		front=rear=0;
		queue[front]=item;
	}
	else if(front==0) {
		front=MAX-1;
		queue[front]=item;
	}
	else {
		front--;
		queue[front]=item;
	}
}
void insert_rear(int item) {
	if((rear+1)%MAX==front);
		printf("queue is full:");
	if(front==-1) {
		front=rear=0;
		queue[rear]=item;
	}
	else {
		rear=(rear+1)%MAX;
		queue[rear]=item;
	}
}
void delete_front() {
	if(front==-1)
		printf("queue is empty:");
	else {
		printf("%d",queue[front]);
	if(front==rear) 
		front=rear=-1;
	else
		front=(front+1)%MAX;
	}
}
void delete_rear() {
	if(front==-1)
		printf("queue is empty:");
	else {
		printf("%d\n",queue[rear]);
	if(front==rear)
		front=rear=-1;
	else if(rear==0)
		rear=MAX-1;
	else
		rear--;
	}
}
void display() {
	int i=front;
	if(front==-1)
		printf("dequeue is empty\n");
	else {
		while(i!=rear) {
			printf("%d\n",queue[i]);
			i=(i+1)%MAX;
		}
			printf("%d\n",queue[rear]);
			i=(i+1)%MAX;
	}
			printf("%d",queue[rear]);

}
