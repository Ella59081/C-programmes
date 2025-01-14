#include <stdio.h>

int main(){
	int num;
	int num2;
	char operation;
	
	printf("Enter your operation :");
	scanf("%c", &operation);
	
	printf("Enter two numbers");
	scanf("%d %d", &num, &num2);
	
	switch(operation){
		case '+':
			printf("The sum is %d", num + num2);
		break;
		
		case '-':
			printf("The answer is %d", num - num2);
		break;
		
		case '/':
			printf("The quotient is %d", num / num2);
		break;
		
		case '*':
			printf("The answer is %d", num * num2);
		break;
	}
	return 0;
}
