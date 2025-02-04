//structures are data datatypes that are used to store vaiables of differnent types
#include <stdio.h>
#include <string.h>

//struct structureName{
//    datatype memmber1;
//	datatype memeber2;	
//}

struct Person{
    char name[50];
	int accNumber;
	float balance;	
}person1, person2;

int main(){
	//assign a value to person1
	strcpy(person1.name, "Micheal Sofield");
	person1.accNumber = 20349576;
	person2.balance = 5000.00;
	
	strcpy(person2.name, "Anna Kendrick");
	person2.accNumber = 454230008;
	person2.balance = 3000.00;
	
	printf("Name: %s \n", person1.name);
	printf("Name: %d \n", person1.accNumber);
	printf("Name: %f \n", person1.balance);
	
	printf("\nName: %s \n", person2.name);
	printf("Name: %d \n", person2.accNumber);
	printf("Name: %f \n", person2.balance);
	
	return 0;
	
}
