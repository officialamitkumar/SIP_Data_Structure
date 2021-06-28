#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>

int flag=0;
void main()

{
	int arr1[10][10],arr2[10][10],arr3[10][10],row,col,inum,snum,res;
	void getdata(int[10][10],int,int);
	void putdata(int[10][10],int,int);
	void addition(int[10][10],int[10][10],int[10][10],int,int);
       //	int search(int[],int);
      //	void sort(int[]);

	clrscr();
	cout<<endl<<"Enter the row and column of array    ";
	cin>>row>>col;
	cout<<endl<<"Enter the First matrix elements";
	getdata(arr1,row,col);
	clrscr();
	cout<<endl<<"Enter the elements of secound matrix";
	getdata(arr2,row,col);


	while(1){
	clrscr();
	cout<<endl<<"                                OPERATIONS ON ARRAY";
	cout<<endl<<"	Select From Given List\n";
	cout<<endl<<"	1.Display";
	cout<<endl<<"	2.Transpose";
	cout<<endl<<"	3.Addition";
	cout<<endl<<"        4.multiply";
	cout<<endl<<"	5.Exit      ";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<endl<<"1st matrix is =>" ;
			 putdata(arr1,row,col);
			 cout<<endl<<"2nd matrix is =>";
			 putdata(arr2,row,col);
			 if(flag==1)
			 {   cout<<endl<<"Sum of two matrix =>";
			     putdata(arr3,row,col);
			 }

			 getch();
			 break;

		case 2 : cout<<endl<<"Transpose of matrix=>";
		case 3 :  addition(arr1,arr2,arr3,row,col);
			 break;

		case 4 : cout<<"deletion";
			 break;

		case 5 :
			 break;

		case 6 : //sort(arr);
			 break;

		case 7 : exit(0);

		default : cout<<"Wrong Choice";
	}
	}
	getch();

}
void getdata(int arr[10][10],int row,int col){

	cout<<endl<<"Enter the  Elements in 2D array (matrix) "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
}

void putdata(int arr[10][10],int row,int col){
	cout<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void addition(int arr1[10][10],int arr2[10][10],int arr3[10][10],int row,int col){

  flag =1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
}