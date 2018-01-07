#define Py_LIMITED_API

#include <Python.h>
#include <stdio.h>


static PyObject* hello_world_print_hello_world(PyObject *self, PyObject *args)
{
    printf("Hello World\n");
    Py_RETURN_NONE;
}

static PyMethodDef hello_world_methods[] = { 
    {   
        "print_hello_world",
        hello_world_print_hello_world,
        METH_NOARGS,
        "Print 'hello world' from a method defined in a C extension."
    },  
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hello_world_definition = { 
    PyModuleDef_HEAD_INIT,
    "hello_world",
    "A Python extension module that prints 'hello world' from C.",
    -1, 
    hello_world_methods
};

PyMODINIT_FUNC PyInit_hello_world(void)
{
    Py_Initialize();
    return PyModule_Create(&hello_world_definition);
}