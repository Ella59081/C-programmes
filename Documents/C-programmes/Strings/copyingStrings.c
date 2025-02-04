#include <stdio.h>
#include <string.h>

int main(){
	
	int i;
	char str[20] = "we are all here";
	char dest = " ";
	for(i = str[0]; i < strlen(str); i++){
		dest += str[i];
	}
	printf("%s", dest);
//	char *str = "We are all here";
//	char *dest = str;
//	char i;
//	
//	for(i = *dest; i != "\0"; i++){
////		printf("%c", i);
//	}
//	printf("%c", i);
} 
