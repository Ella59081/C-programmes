#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[20] = "nice to meet you";
	char str2[120] = "every body";
	
	strcpy(str1, str2);
	puts(str1);
	
	printf("\n");
	puts(str2);
	
//	char str3[50] = "failure";
//	char str4[50] = "we will always student and fees";
//	
//	strcat(str3, str4);
//	puts(str3);
//	puts(str4);
    return 0;
    
    
}
