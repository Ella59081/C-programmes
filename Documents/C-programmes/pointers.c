//pointer point to the memory address


#include <stdio.h>

int main(){
	
	int age = 20;
	
	int *pc, c;
	c = 5;
	pc = &c;
	*pc = 10;
	printf("%d", c);
	printf("\n %d", *pc);
	
//	printf("age = %d", age);
//	printf("\n address of age: %p", &age);
	
	
	return 0;
}
