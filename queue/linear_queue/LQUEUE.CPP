#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>

#define NIL -1
#define MAX_SIZE 10

typedef struct linearqueue{
	int arr[MAX_SIZE];
	int rear;
	int front;
}queue;

void main()
{
	queue  q;
	q.rear=q.front=NIL;
	int choice,item,x,i;
	void insertion(queue*,int);
	int isempty(queue*);
	int isoverflow(queue*);
	void display(queue*);

 while(1){
  clrscr();
   cout<<endl<<"                              Operation On Queue";
   cout<<endl<<"  1.Insertion";
   cout<<endl<<"  2.Deletion";
   cout<<endl<<"  3.Display";
   cout<<endl<<"  4.Exit   ";
   cin>>choice;
   switch(choice){
	case 1 : x=isoverflow(&q);
		 if(x==0)
		 {
			cout<<endl<<"Enter the item to insert => ";
			cin>>item;
			insertion(&q,item);
			cout<<endl<<"Item Inserted";
		 }
		 else
		 {
			cout<<endl<<"Queue is full";
		 }

		 getch();
		 break;

	case 2 : cout<<endl<<"Deletion";
		 break;

	case 3 : x=isempty(&q);
		 if(x==0)
		 {
			cout<<endl<<"Queue is => ";
			display(&q);
		 }
		 else
		 {
			cout<<endl<<"queue is Empty";
		 }

		 getch();
		 break;

	case 4 : exit(0);

	default : cout<<endl<<"Wrong choice";
		  getch();
   }

   }
  getch();
}

void insertion(queue *q,int item)
{
	if(q->front==NIL)
	{
		q->rear=q->rear+1;
		q->front=q->front+1;
	}
	else if(q->rear==MAX_SIZE-1)
	{
		for(int i=q->front;i<q->rear;i++)
			q->arr[i-(q->front)]=q->arr[i];

		q->rear=q->rear - q->front;
		q->front=0;
		q->rear=q->rear+1;
	}
	else
	{
		q->rear=q->rear+1;
	}

	q->arr[q->rear]=item;
}

int isempty(queue *q){

	if(q->front==NIL && q->rear==NIL)
		return 1;
	else
		return 0;

}
int isoverflow(queue *q){
	if(q->front==0 && q->rear==MAX_SIZE-1)
		return 1;
	else
		return 0;

}
void display(queue *q){

	for(int i=q->front;i<=q->rear;i++)
		cout<<q->arr[i]<<" ";
}