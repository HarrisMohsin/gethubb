#include<stdio.h>

char* buffer[256];

int main (void) {
	
	fgets(buffer, 255, stdin);

	//its '\n' for newline
	//fgets already has newline at end, so '\n' should be at end
	//you had: printf("/n%s", buffer);
	printf("%s\n", buffer);

/*TABS*/return(0);

}


