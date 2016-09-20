#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

#include"strarr.h"

int init(char*** s_a_p) {
	
	*s_a_p = (char**)malloc(1*sizeof(char*));
	if( *s_a_p == NULL ) {
		fprintf(stderr, "Error\n");
		exit(1);
	}

	return(1);
}

void add(char*** s_a_p, int* cur_len_ptr, char* s) {
		grow( s_a_p, *cur_len_ptr );
		(*cur_len_ptr) = (*cur_len_ptr)+1;
		(*s_a_p)[ *cur_len_ptr-1 ] = strdup(s);
}

//reallocs string array by plus 1
void grow(char*** s_a_p, int cur_len) {
	*s_a_p = (char**)realloc( *s_a_p, (cur_len+1)*sizeof(char*) );
}

//prints all the strings string_array
void print_all(char** string_array, int len) {
	int i;

	for(i=0; i<len; i++) {
		printf("%i) %s\n", i, string_array[i]);
	}
}
