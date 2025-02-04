#include <stdio.h>

int main(){
	
	int i, size, num;
	int t1 =0;
	int t2 =1;
	
	int nextnum = t1 + t2;
	
	printf("Enter the number of elements");
	scanf("%d", &size);
	
	printf("First two terms: %d, %d", t1, t2);
	
	for(i = 3; i < size; ++i){
		printf(" \n %d \n", nextnum);
		t1 =t2;
		t2 = nextnum;
		nextnum = t1 + t2;
//		nextnum++;
		
	}

	
	return 0;
	
}
