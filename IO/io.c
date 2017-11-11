#include <stdio.h>

// Scan a string from stdin and return the length.
int scanstring(char* str){
	char c = getchar_unlocked();
	while(c < 48 || c > 57) c = getchar_unlocked();
	int i = 0;
	while(c != '\n'){
		str[i] = c;
		i++;
		c = getchar_unlocked();
	}
	str[i] = '\0';
	return i;
}

// Scan an int into the adress in function argument.
void scanint(int* num){
	char c = getchar_unlocked();
    *num = 0;
    while(c < 48 || c > 57) c = getchar_unlocked();
    while(47 < c && c < 58){
        *num = *num*10 + c - 48;
        c = getchar_unlocked();
    }
}

int main(){

}
