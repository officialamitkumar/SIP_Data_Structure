#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
int n;
void main()
{
	int arr[100],inum;
	void getdata(int[]);
	void putdata(int[]);
	void insert(int[],int);
	clrscr();
	cout<<endl<<"Enter the size of array    ";
	cin>>n;
	getdata(arr);


	while(1){
	clrscr();
	cout<<endl<<"                                OPERATIONS ON ARRAY";
	cout<<endl<<"	Select From Given List\n";
	cout<<endl<<"	1.Traversing";
	cout<<endl<<"	2.Searching";
	cout<<endl<<"	3.Insertion";
	cout<<endl<<"	4.Deletion";
	cout<<endl<<"	5.Display";
	cout<<endl<<"	6.sorting    ";
	cout<<endl<<"	7.Exit      ";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Traversing";
			 break;

		case 2 : cout<<"searching";
			 break;

		case 3 : cout<<endl<<endl<<"Enter the no to insert";
			  cin>>inum;
			  insert(arr,inum);
			 break;

		case 4 : cout<<"deletion";
			 break;

		case 5 : putdata(arr);
			 getch();
			 break;

		case 6 : cout<<"sorting";
			 break;

		case 7 : exit(0);

		default : cout<<"Wrong Choice";
	}
	}
	getch();

}
void getdata(int arr[100]){

	cout<<endl<<"Enter the "<<n<<" Elements in array  "<<endl;
	for(int i=0;i<n;i++)
	    cin>>arr[i] ;
}

void putdata(int arr[100]){
	cout<<endl<<endl<<"Array is => " ;
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
}
void insert(int arr[10],int num)
{
	n = n + 1;
	arr[n-1]=num;
}