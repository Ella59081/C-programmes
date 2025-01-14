#include <stdio.h>

int main(){
//	int i;
//	for(i = 0; i < 11; ++i){
//		printf("%d", i);
//	}
    
//    int num, count, sum = 0;
//    printf("Enter a positive integer:");
//    scanf("%d", &num);
//    
//    for(count = 1; count <= num; ++count){
//    	sum += count;
//	}
//	printf("sum = %d", sum);
	
//	int i;
//	printf("Enter a value for i");
//	scanf("%d", &i);
//	
//	while(i <= 10){
//		printf("%d", i);
//		i++;
//	}
	
	float num, sum = 0;
	
	do{
		printf("Enter a number: ");
		scanf("%f", &sum);
		sum += num;
	}
	while(num > 0.0);
	
	printf("sum = %.f", sum);
	
	
	return 0;
}
