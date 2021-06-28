#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip.h>

#define  MAX_STACK  10
#define  NIL  -1

typedef struct stacktype{
	int s[MAX_STACK];
	int top;
}stack;

void main(){

int choice;
stack s1;
s1.top=NIL;
int item,x;
void push(stack *,int);
int peep(stack *);
int pop(stack *);
void display(stack*);
int isunderflow(stack*);
int isoverflow(stack*);
clrscr();
while(1){
clrscr();
cout<<endl<<"           Operation on Stack";
cout<<endl<<"   1.Push ";
cout<<endl<<"   2.Pop";
cout<<endl<<"   3.Display";
cout<<endl<<"   4.Peep";
cout<<endl<<"   5.Exit     ";
cout<<endl<<"Enter your choice => ";
cin>>choice;
switch(choice)
{
	case 1 : x=isoverflow(&s1);
		 if(x==0)
		 {
		 cout<<endl<<"Enter the Item to insert in stack   ";
		 cin>>item;
		 push(&s1,item);
		 }
		 else
		 {
		 cout<<endl<<"Stack is full";
		 getch();
		 }

		 break;

	case 2 : x=isunderflow(&s1);
		 if(x==0)
		 {
			item=pop(&s1);
			cout<<endl<<"Poped item => "<<item;
		 }
		 else
		 {
			cout<<endl<<"Stack is Empty";
		 }
		 getch();
		 break;

	case 3 : cout<<endl;
		 x=isunderflow(&s1);
		 if(x==0)
		 {
			display(&s1);
		 }
		 else
		 {
			cout<<endl<<"Stack is Empty";
		 }

		 getch();
		 break;

	case 4 : x=isunderflow(&s1);
		 if(x==0)
		 {
			cout<<endl<<"Last element in stack=>  ";
			int res=peep(&s1);
			cout<<res;
		 }
		 else
		 {
			cout<<endl<<"Stack Is Empty";
		 }

		  getch();
		  break;

	case 5 : exit(0);

	default : cout<<endl<<"Wrong Choice";
		  getch();
}
}
getch();
}

void push(stack *p,int item){
	p->top=p->top+1;
	p->s[p->top]=item;
}

int peep(stack *p){
	int item;
	item=p->s[p->top];
	return item;
}
void display(stack *p){

	for(int i=p->top;i>=0;i--)
	{
		cout<<p->s[i]<<" ";
	}
}
int isunderflow(stack *p){
	if(p->top==NIL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isoverflow(stack *p){
	if(p->top==MAX_STACK - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop(stack *p){
	int item;
	item=p->s[p->top];
	p->top=p->top-1;
	return item;
}