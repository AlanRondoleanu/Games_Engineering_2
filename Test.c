#include <stdio.h>
#include "minunit.h"
#include "DLinkedList.h"

int tests_run = 0;

static char* test_create()
{
  DLList * myList = createDLList();
  mu_assert("Error, size not initialized", 0==size(myList));
  mu_assert("Error, pointers not initialized to NULL on creation", true==atEnd(myList));
  int sizeOfList = size(myList);
  free(myList);
  return sizeOfList;
}

static char* test_size()
{
  DLList * myList = createDLList();
  push(myList, 1);
  mu_assert("size incorrect after push", 1 ==size(myList));
  insertAfter(myList, 2);
  mu_assert("size incorrect after insertAfter", 2 == size(myList));
  insertBefore(myList, 3);
  mu_assert("size incorrect after push", 3 == size(myList));
  deleteCurrent(myList);
  mu_assert("size incorrect after deleteCurrent", 2 == size(myList));
  pop(myList);
  mu_assert("size incorrect after pop", 1 == size(myList));
}

static char* test_push()
{
  DLList * myList = createDLList();
  push(myList, 1);
  mu_assert("size incorrect after push", 1 == size(myList));
}

static char* test_pop()
{
  DLList * myList = createDLList();
  push(myList, 5);
  mu_assert("size incorrect after push", 1 ==size(myList));
  int test = pop(myList);
  mu_assert("popped number wasnt correct", 5 == test);
}

static char* test_getCurrent()
{

}

static char* test_first()
{

}

static char* test_next()
{

}

static char* test_atEnd()
{

}

static char* test_deleteCurrent()
{

}