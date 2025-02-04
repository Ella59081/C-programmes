#include <stdio.h>
#include <string.h>

int main(){
	char word[20] = "See you next time";
	int i;
	int cons = 0;
	int space = 0;
	int vow = 0;
	
	for(i = word[0]; i < strlen(word); i++){
		if(word[i] == "a" || word[i] == "e" || word[i] == "i" || word[i] == "o" || word[i] == "u"){
			vow++;
		}else if(word[i] == " "){
			space++;
		}else{
			cons++;
		}
	}
	printf("The number of vowels are: %d \n", vow);
	printf("The number of consonants are: %d \n", cons);
	printf("The number of spaces are: %d \n", space);
	
}
