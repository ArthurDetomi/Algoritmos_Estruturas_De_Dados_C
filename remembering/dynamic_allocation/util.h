#ifndef UTIL_H
#define UTIL_H

typedef enum { INT, FLOAT, CHAR, DOUBLE } Tipo;

void get_int_demiliter(int *n, int min, int max);
void fill_arr(int *arr, int tam);
void print_arr(int *arr, int tam);
int is_value_in_matrix(int **mat, int l, int c, int value);
int *get_arr(int n);
void *get_arr_by_tipo(int n, Tipo t);
char *reverse_string(char *str);
int *get_arr_int_fill_value(int n, int value);
int **get_matrix_diagonal_1(int l, int c);
void print_mat(int **mat, int l, int c);
void free_arr(void *arr);

#endif