#include<stdio.h>

char* buffer[256];

int main (void) {
	
	fgets(buffer, 255, stdin);

	printf("/n%s", buffer);

return(0);

}


