#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<alloc.h>
struct linklist{
int info;
struct linklist *left;
struct linklist *right;
};
typedef struct linklist node;
node *head;
int count=0;
void main(){
node *start,*temp;
int item;
//do{
clrscr();
cout<<"1.insert from beg"<<endl<<"2.display"<<endl<<"insert from end";
cout<<endl<<"enter your choice";
int ch;
		// inserting node at the beginning
 switch(ch){
case 1 :         clrscr();
			    break;

		 //displaying the nodes
case 2: cout<<"elements of circular link list are="<<endl;
		 int counting=0;
		  while(count!=counting)
		  {
		  cout<<setw(5)<<start->info;
		  head->right=start;
		  counting++;
		  }
		  cout<<endl<<"total number of nodes created =" <<count;
		  break;
		  // insert at the end
case 3: clrscr();
		 cout<<"enter the element";
		start=(node*)malloc(sizeof(node));
		cin>>start->info;
		temp=head->left;
		temp->right=start;
		start->left=temp;
		start->right=head;
		head->left=start;
		count=count+1;
		break;
//default : cout<<endl<<"Wrong choice" ;
}
//cout<<endl<<"do u want to continue(y/n)";
//cin>>item;
//}while(item=='y');
  getch
  ();
 }

