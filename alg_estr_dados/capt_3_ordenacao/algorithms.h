#ifndef ALGORITHMS
#define ALGORITHMS

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void buble_sort(int *arr, int n);
void print_arr(int *arr, int n);
void selection_sort(int *arr, int n);
void insertion_sort(int *arr, int n);
void merge_sort(int *arr, int start, int end);

#endif