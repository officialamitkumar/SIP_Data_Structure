#include<stdio.h>
#include<conio.h>
int count=0;

void main()

{

void getdata(int[50],int);
void putdata(int[50],int);
int binary(int[50],int,int,int);
int a[100];
int n,element;
clrscr();
printf("Enter the value of n\n");
scanf("%d",&n);
getdata(a,n);

printf("\nArray is\n ");
putdata(a,n);
printf("\nEnter the searching Element =");
scanf("%d",element);
int r=binary(a,0,n-1,element);
if(r==-1)
{
 printf("\nElement not found ");

}
else
{
  printf("\nElement fount at location %d",r-1);
}
printf("\nCount=%d\n ",count);

getch();
}

    void getdata(int x[50],int n)



       {

	int k;

	printf("\nenter the value  for sorting\n");

	for(k=0;k<n;k++)

	{

	 scanf("%d",&x[k]);

	}
	 }

     void putdata(int x[50], int n)



	 {

	  int k;

	  for(k=0;k<n;k++)

	 {

	  printf("%d\t",x[k]);

	   }

	  }
 int binary(int a[],int start,int end,int ser_ele)
{
	int middle;
	while(start<=end)
	{
	   middle=(start+end)/2;

	  if(a[middle]==ser_ele)
	  {

		return middle;
	  }
	  else if(a[middle]<ser_ele)
		start=middle+1;
	   else
		end=middle-1;
	}
    return -1;
}
