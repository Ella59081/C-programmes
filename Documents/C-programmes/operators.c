#include <stdio.h>

int main(){
	int rad;
	
	float pie;
	pie = 3.14;
	printf("Enter the radius");
	scanf("%d", &rad);
	scanf("%f", &pie);
	
	printf("The area of the circle is %d", &pie * &rad* &rad);
}
