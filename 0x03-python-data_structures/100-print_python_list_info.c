#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - function that prints some basic
 *                         info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
    int elem;

    // Print the size of the Python list
    printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));

    // Print the allocated memory for the list
    printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

    // Iterate through each element in the list and print its type
    for (elem = 0; elem < Py_SIZE(p); elem++)
        printf("Element %d: %s\n", elem, Py_TYPE(PyList_GetItem(p, elem))->tp_name);
}
