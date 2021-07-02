  #include<iostream.h>
  #include<iomanip.h>
  #include<alloc.h>
  #include<conio.h>
       struct linklist{
       int info;
      // struct linklist *pre;
       struct linklist *next;
       };
	    typedef struct linklist node;
	    node *start=NULL;
	    int count=0;
       void main(){
	   node *temp,*head;
	   char ch;
		do{
			clrscr();
			cout<<"enter the number="<<endl;
			head=(node *)malloc(sizeof(node));
			cin>>head->info;
			if(start!=NULL)
			  {
				temp->next=head;
				temp=head;
			  }
			 else
				{
				   start=temp=head;
				}
			cout<<"do you want to continue(y/n)"<<endl;
			cin>>ch;
		   }while(ch=='y');
	       temp->next=NULL;
	       node *local;
	       local=start;

	       cout<<"status of link list="<<endl;
			while(local!=NULL)
				  {
					 cout<<"  "<<local->info;
					count++;
					local=local->next;
				     }
	       cout<<endl<<"total number of node="<<count;
	       getch();
	       }
