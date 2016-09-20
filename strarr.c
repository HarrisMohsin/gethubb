#include<stdio.h>
#include<stdlib.h>
#include<strings.h>


int init(char*** s_a_p) {
	
	*s_a_p = (char**)malloc(10*sizeof(char*));
	if( *s_a_p == NULL ) {
		fprintf(stderr, "Error\n");
		exit(1);
	}

	return(10);
}

void add(char*** string_array_ptr, int* cur_len_ptr, char* s) {
	
}

//reallocs string array by plus 1
void grow(char*** string_array_ptr, int cur_len);

//prints all the strings string_array
void print_all(char** string_array, int len);
