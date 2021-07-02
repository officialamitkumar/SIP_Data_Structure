#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
int count=0;
void main()
{
	void getdata(int[10],int);
	void putdata(int[10],int);
	void insertion_sort(int a[],int);
	int i,a[100],n;
	clrscr();
	printf("enter the value of n\n");
	scanf("%d",&n);
	getdata(a,n);
	printf("\nbefore soring\n");
	putdata(a,n);
	insertion_sort(a,n);
	printf("\nafter sorting\n");
	putdata(a,n);
	printf("\n for n = %d value of count is  %d",n,count);
	getch();
}
void getdata(int a[10],int n)
{
     int k;
     printf("enter the value  for sorting\n");
     for(k=1;k<=n;k++)
     {
      scanf("%d",&a[k]);
     }
}
void putdata(int a[10], int n)
{
	int k;
	for(k=1;k<=n;k++)
	{
	      printf("%d\t",a[k]);
	 }
	 printf("\n");
}
void insertion_sort(int a[],int n)
{
	 int key,j,i,temp;
	 count++;
	 for( j=2;j<=n;j++)
	
		{
			count++;
			key=a[j];
			count++;
			i=j-1;
			count++;
			while(i>0 && a[i]>key)
			{
				count++;
				count++;
				a[i+1]=a[i];
				count++;
				i=i-1;
				count++;

			}
			a[i+1]=key;
			count++;
			count++;
		}

}
