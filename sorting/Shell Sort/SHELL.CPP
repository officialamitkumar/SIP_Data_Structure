#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

int count=0;
void shell_sort(int [10],int);

void main()
{
	void getdata(int[10],int);
	void putdata(int[10],int);
	


	int i,a[100],n;
	clrscr();
	printf("Enter the Size of array=\n");
	scanf("%d",&n);
	getdata(a,n);
	printf("\nBefore soring=\n");
	putdata(a,n);
	shell_sort(a,n);
	printf("\nAfter sorting=\n");
	putdata(a,n);
	printf("\n For n = %d\n value of count is  %d",n,count);
	getch();
}

void getdata(int a[10],int n)
{
     int k;
     printf("Enter the %d Element for sorting\n",n);
     for(k=0;k<n;k++)
     {
      scanf("%d",&a[k]);
     }
}
void putdata(int a[10], int n)
{
	int k;
	for(k=0;k<n;k++)
	{
	      printf("%d\t",a[k]);
	 }
	 printf("\n");
}

void shell_sort(int a[],int n)
{       count++;
	for(int gap=n/2;gap>0;gap=gap/2)
	{
		count++;
		for(int i=gap;i<n;i++)
		{
			count++;
			int temp=a[i];
			count++;
			int j;
			count++;
			for(j=i;j>=gap && a[j-gap]>temp;j=j-gap)
			{
				count++;
				a[j]=a[j-gap];
				count++;
			}
			count++;
			a[j]=temp;
			count++;
		}
		count++;
	}
	count++;
}