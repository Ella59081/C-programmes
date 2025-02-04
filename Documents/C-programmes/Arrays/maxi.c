#include <stdio.h>

int main(){
	int max, i, n;
	
	printf("Enter the number of elements :");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements : \n");
	
	for(i=0 ; i < n; i++){
		scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    
    for(i = 0; i < n; i++){
    	if(arr[i] > max){
    		max = arr[i];
		}
	}
	printf(" The largest number in the array is %d", max);
	
	return 0;
}
