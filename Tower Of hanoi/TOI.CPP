#include <stdio.h>
#include<conio.h>
int count=0;
void main()
{
	int n ;
	int c=0;

	int towerOfHanoi(int , char, char, char);

	clrscr();
	printf("\n Enter the no of disk");
	scanf("%d",&n);
	c=towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
	printf("\n count=",c);
	getch();
}
int towerOfHanoi(int n, char source, char destination, char rod)
{       count++;
	if (n == 1)
	{       count++;
		printf("\n Move disk %c to rod %c",source,destination);
		count++;
		return count;
	}
	count++;
	towerOfHanoi(n-1,source, rod, destination);
	count++;
	printf("\n Move disk %c  to rod %c", source,destination);
	count++;
	towerOfHanoi(n-1,rod,destination,source);
	count++;

}
