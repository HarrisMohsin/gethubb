#ifndef _STRARR_H_
#define _STRARR_H_

//easy functions to manipulate a malloc'd char**

//inits a string_array, must use
void init(char*** string_array_ptr);

//adds string to array, will grow if needed
//USAGE:
//char** strarr;
//int len = init( &strarr );
//add( &strarr, &len, "add me");
void add(char*** string_array_ptr, int* cur_len_ptr, char* s);

//reallocs string array by plus 1
void grow(char*** string_array_ptr, int cur_len);

//prints all the strings string_array
void print_all(char** string_array, int len);
