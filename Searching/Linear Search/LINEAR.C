#include<stdio.h>
#include<conio.h>
void main(){

	int i,count=0,n,arr[100],search_ele,a=0;
	clrscr();
	printf("Enter the no of input");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nenter element %d\n",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("\nEnter the searching element");
	scanf("%d",&search_ele);
	count++;
	for(i=0;i<=n;i++)
	{
	count++;
		if(arr[i]==search_ele)
		{
			count++;
			a=1;
			count++;
			break;
			count++;
		}
		count++;
	}
	count++;
	if(a==1)
	{
		printf("\nelement found at location %d",i+1);
		printf("\n count=%d",count);

	}
	else
	{
		printf("\nElement not found");
		printf("count %d",count);
	}

	getch();
}