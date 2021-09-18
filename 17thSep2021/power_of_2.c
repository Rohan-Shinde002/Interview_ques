#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number ");
	scanf("%d",&number);

	if(number==1)
	{
		printf("%d is not power of 2",number);
	}
	else if((number&(number-1))==0)
	{
		printf("%d is power of 2",number);
	}
	else
	{
    		printf("%d is not power of 2",number);
	}
}
