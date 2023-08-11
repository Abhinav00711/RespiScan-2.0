// to write a menu driven program to get an array and perform the operations//
#include<stdio.h>
// declaring global variables//
int i,n,a[1000],a2,c=0;
// to read the user input//
void readarray()
{

	printf("Enter the size of your array: \n");
	scanf("%d",&n);
	printf("Enter the elements of your array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
//to display the array//
void displayarray()
{
	printf("Your array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
//to display the highest number among the elements on the array//
int highestnumber()
{
	for(i=0;i<n;++i){
		if(a[0]<a[i]){
			a[0]=a[i];
		}
	}
	printf("The largest number in the given array is: %d\n",a[0]);
}
//to display the smallest number in the array//
int smallestnumber()
{
	int sm=a[0];
	for(i=0;i<n;i++)
	{
		if(sm>a[i])
		{
		   sm=a[i];
		}
	}
	printf("The smallest number is: %d\n",sm);
	return 0;
}
//to check if a number is repeating//
int repeatednumbers()
{
	printf("Enter the element you want to check is repeating or not: ");
	scanf("%d",&a2);
	for(i=0;i<n;i++)
    {
        if(a2==a[i])
        {
            c++;
        }
    }
    if(c>1)
        printf("It is repeated in the array!\n");
    else if(c=1)
        printf("It is not repeated in the array.\n");
}
// to count the repeated number//
int repeatednumbercount()
{
	for(i=0;i<n;i++){
		if(a2==a[i])
		{
			c;
		}
	}
	if(c>1)
	    printf("Repeated number count : %d\n",c);
	else if(c=1)
	    printf("Not repeated\n");   
}
// to show the repeated numembr with count//
void showrepeatednumbers()
{
	for(i=0;i<n;i++){
    	if(a2==a[i])
		{
			c;
		}
	}
	if(c>1)
	   printf("Repeated number is: %d\nand the repeating count is: %d",a2,c);
	else if(c=1)
	     printf("\n");
}
int main()
{
	readarray();
	displayarray();
	highestnumber();
	smallestnumber();
	repeatednumbers();
	repeatednumbercount();
	showrepeatednumbers();
}
