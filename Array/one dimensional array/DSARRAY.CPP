#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
int n;
void main()

{
	int arr[100],inum,snum,res;
	void getdata(int[]);
	void putdata(int[]);
	void insert(int[],int);
	int search(int[],int);
	void sort(int[]);

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

		case 2 : cout<<endl<<"Enter the searching number  ";
			 cin>>snum;
			 res=search(arr,snum);
			 if(res>=0)
			 {
				cout<<endl<<"The Number is Found at "<<res<<" position";
			 }
			 else
			 {
				cout<<endl<<"Number is not Found";
			 }
			 getch();
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

		case 6 : sort(arr);
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

int search(int arr[10],int num){

	int flag=-1,sadd;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			flag=1;
			sadd=i+1;
			break;
		}
	}
	if(flag==-1)
	{
		return -1;
	}
	else
	{
		return sadd;
	}

}

void sort(int arr[10]){

	int max=arr[0];
	int temp;

	for(int i=0;i<n-1;i++)
	{
	     for(int j=0;j<n-i;j++)
	     {
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	     }
	}

}