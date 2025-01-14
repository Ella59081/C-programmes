#include <stdio.h>

int main(){
//	int number;
	
//	printf("Enter an integer");
//	scanf("%d", &number);
	
//	if(number < 0){
//		printf("you entered %d. \n it is a negative value", number);
//	}else{
//		printf("you entered %d. \n it is a positive value", number);
//	}
	
//	return 0;
	
//	if(number % 2 == 0){
//		printf("you entered %d. \n it is an even number", number);
//	}else{
//		printf("you entered %d. \n it is an odd number", number);	
//	}

    int number1, number2;
    
    printf("Enter two integers");
    scanf("%d %d", &number1, &number2);
    
    if(number1 == number2){
    	printf("Result: %d = %d", number1, number2);
	}else if(number1 > number2){
		printf("Result: %d > %d", number1, number2);
	}else{
		printf("Result: %d < %d", number1, number2);
	}
	return 0;
}
