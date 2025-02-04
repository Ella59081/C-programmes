#include <stdio.h>

int main(){
//	int arr[4];
//	int i;
//	
//	for(i = 0; i < 4; i++){
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	printf("Adress of array arr: %p\n", arr);
	
//	int i, arr[6], sum = 0;
//	printf("Enter 6 numbers: ");
//	
//	for(i = 0; i < 6; i++){
//		scanf("%d", arr + i);
//		sum += *(arr + 1);
//		
//	}
//	printf("sum = %d\n", sum);
	
	int x[5] = {1, 2, 3, 4, 5};
	
	int *ptr;
	ptr = &x[1];
	
	printf("*ptr = %d\n", *ptr);
	printf("*(ptr+1) = %d\n", *(ptr+1));
	printf("*(ptr+2) = %d\n", *(ptr+2));
	printf("*(ptr-1) = %d\n", *(ptr-1));
	
	return 0;
}

