//an array in c is a data structure that contains multiple values of the same data type with a single reference.//

//arr[] = {1, 2, 3, 4, 5, 6}

//2d arrays//                      

#include <stdio.h>

int main(){
//	int i;
//	int avg;
//	int length = arr[];
//	
//	int arr[] = {1, 2, 3, 4, 5};
//	int sum = 0;
//	
//	
//	scanf("%d", &length);
//	printf("Input the length");
//	
//	
//	for(i=0; i < arr[]; i++ ){
//		sum += arr[i] ;
//	}
//	printf("\n %d", sum);
//
//	avg = sum / arr[];
//	printf("\n %d", avg);
	
	int i, n, avg;
	int sum = 0;
	
	printf("Enter the number of elements");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements \n");
//	scanf("%d %d %d %d %d", &arr[5]);
	
	for(i=0 ; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i] ;
	}
	printf("The sum is: %d \n", sum);
	
	avg = sum / n;
	printf("The average is %d", avg);
	return 0;
}
