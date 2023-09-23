#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	char op;
	printf("\tCalculator Performing + - * / % \n");
	printf("Enter 1st Number: ");
	scanf("%d",&num1);
	printf("Enter 2nd Number: ");
	scanf("%d",&num2);
	printf("Enter Operator: ");
	scanf("%c",&op);
	scanf("%c",&op);
	switch(op)
	{

	case'+' :
	printf("The answer is %d",num1+num2);
	break;
	case'-':
	printf("The answer is %d",num1-num2);
	break;
	case'*':
	printf("The answer is %d",num1*num2);
	break;
	case'/':
	printf("The answer is %d",num1/num2);
	break;
	case'%':
	printf("The answer is %d",num1%num2);
	break;
	default:
	printf("Invalid Operator");
	}
}
