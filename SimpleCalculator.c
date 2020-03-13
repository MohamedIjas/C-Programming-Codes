#include<stdio.h>
void main()
	{
		float result,num1.num2;
		char operator;

		printf("\n Enter an Operator (+,-,*,/) : ");
		scanf("%c", &operator);
		prinrf("\n Enter 2 operands: ");
		scanf("%f%f", &num1, &num2);

		switch(operator)
			{
				case '+':
					result=num1+num2;
					printf(" Sum = %f", result);
					break;

				case '-':
					result=num1-num2;
					printf(" Difference = %f", result);
					break;

				case '*':
					result=num1*num2;
					printf(" Product = %f", result);
					break;

				case '/':
					result=num1/num2;
					printf(" Quotient = %f", result);
					break;

				default:
					printf("\n Invalid Operator");
			}

	}
