/* USAGE
char** strarr;
int len = init( &strarr );

add( &strarr, &len, "string wan" );
add( &strarr, &len, "string two, electric boogaloo, " );
add( &strarr, &len, "streeeeeee" );

print_all(strarr, len);
 */

#ifndef _STRARR_H_  //this is a header guard
#define _STRARR_H_

//easy functions to manipulate a malloc'd char**

//inits a string_array and returns length; MUST BE USED
int init(char*** string_array_ptr);

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

#endif //end #ifndef strarr.h
