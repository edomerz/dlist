/*
	dlist
*/
#ifndef __DLIST_H__
#define __DLIST_H__

#include <stdio.h>

typedef struct dlist_adt dlist_t;
typedef struct dlist_node *dlist_iter_t;

typedef int(*is_match_func)(const void *data, const void *seek);
typedef int(*action_func)(void *data, void *param);

/* Creates a new list and returns a pointer to it. */
dlist_t *DListCreate(void);

/* Destroys a list. */
void DListDestroy(dlist_t *dlist);

/* Returns the number of elements inside the list. */
size_t DListSize(const dlist_t *dlist);

/* Checks if the list is empty. If true returns 1, else - returns 0. */
int DListIsEmpty(const dlist_t *dlist);

/* Returns an iterator to the first/last element of a list. */
dlist_iter_t DListBegin(const dlist_t *dlist);
dlist_iter_t DListEnd(const dlist_t *dlist);

/* Returns an iterator to the succeeding/preceding element of item. */
dlist_iter_t DListNext(const dlist_iter_t item);
dlist_iter_t DListPrev(const dlist_iter_t item);

/* Checks if two iterators point to them same element. 
If true returns 1, else - returns 0. */
int DListIsSameIter(const dlist_iter_t iter1, const dlist_iter_t iter2);

/* Returns the data of item. */
void *DListGetData(dlist_iter_t item);

/* Inserts a new element before 'where',  assign it with 'data'
   and returns an iterator to it. */
dlist_iter_t DListInsertBefore(dlist_iter_t where, void *data);

/* cut & paste the elements in the range 'begin'-'end' to before 'where'.  
   Returns an iterator to first spliced element. */
dlist_iter_t DListSplice(dlist_iter_t where, dlist_iter_t begin, dlist_iter_t end);

/* Removes the element. */
dlist_iter_t DListRemove(dlist_iter_t element);

/* Inserts a new element to the beginning/end of the list, assign it with data
and return it */
dlist_iter_t DListPushFront(dlist_t *dlist, void *data);
dlist_iter_t DListPushBack(dlist_t *dlist, void *data);

/*  Removes the first/last element of the list.  return poped data */
void *DListPopFront(dlist_t *dlist);
void *DListPopBack(dlist_t *dlist);

/* Finds 'seek' inside a list, using the function pointed by 'fp'.
Returns an iterator to the element found or 'end' */
dlist_iter_t DListFind(dlist_iter_t begin, dlist_iter_t end, is_match_func fp, const void *seek);

/* Performs an action deteremined by 'action_func' on each element of the range 'begin' to 'end'. 
   DListForEach stops upon fp failure. DListForEach returns fp exit status. */
int DListForEach(dlist_iter_t begin, dlist_iter_t end, action_func fp, void *param);


#endif /* ifndef __DLIST_H__*/
