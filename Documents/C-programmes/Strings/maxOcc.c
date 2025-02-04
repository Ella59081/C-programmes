#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int occ = 0;
	char str[20] = "no one is coming";
	char letter;
	
	printf("%s \n", str);
	
	printf("Enter a character to find its frequency: ");
	scanf("%c", letter);
	
	for(i = str[0]; i < strlen(str); i++){
		if(str[i] == letter){
			occ++;
		}else{
			occ = 1;
		}
	}
	
	
	printf("The occurence of %c is %d", letter, occ);
}
