#ifndef FUNC_POINT_H
#define FUNC_POINT_H

void array_iterator(int *array, size_t size, void(* action)(int));
void print_name(char *name, void (*f)(char *));
#endif
