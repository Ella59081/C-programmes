#include <stdio.h>

int main(){
	
	int i,j, rows, cols;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	printf("Enter the number of columns:");
	scanf("%d", &cols);
	
	int arr1[rows][cols];
	int arr2[rows][cols];
	int sum[i][j];
	
	//to enter the elements off arr1
	for(i =0; i < rows; i++){
		for(j =0; j < cols; j++){
			printf("Enter the element at [%d][%d]", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\n");
	
	//to enter the elements off arr2
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf(" Enter the element at [%d][%d]", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}
	
	//to add the two arrays
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	//to print out the sum
	
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("%d \t", sum[i][j]);
		}
	}
	
	return 0;
}
