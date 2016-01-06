#include <stdlib.h>
#include <string.h>
#include "dlist.h"

dlist_iter_t DListnodeCreate(void);
int print(void* data, void *param);
int IsMatch(const void *data, const void *seek);
	
int main(int argc, char* argv[], char** envp)
{
	dlist_iter_t dn_ptr1 = NULL;
	dlist_iter_t dn_ptr2 = NULL;
	dlist_iter_t dn_ptr3 = NULL;
	dlist_iter_t dn_ptr4 = NULL;
	dlist_iter_t dn_ptr5 = NULL;
	dlist_iter_t dn_ptr6 = NULL;	
	dlist_t *dl_ptr = NULL;
	size_t size = 0;
	
	action_func fp = &print;
	is_match_func fp2 = &IsMatch;
			
/*############# DListCreate ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dl_ptr = DListCreate();
	printf("sizeof(dl_ptr):%lu\n", sizeof(dl_ptr));

/*############# DListSize ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListIsEmpty ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	
/*############# DListBegin ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListBegin:%p\n", (void*)DListBegin(dl_ptr));
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	
/*############# DListEnd ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListEnd:%p\n", (void*)DListEnd(dl_ptr));
	

/*############# DListPushFront ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr1 = DListPushFront(dl_ptr, (void*)1);
	printf("&dn_ptr1:%p\n", (void*)&dn_ptr1);
		
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListPushFront ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr2 = DListPushFront(dl_ptr, (void*)2);
	printf("&dn_ptr2:%p\n", (void*)&dn_ptr2);
		
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListPushBack ################*/	
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr3 = DListPushBack(dl_ptr, (void*)3);
	printf("&dn_ptr3:%p\n", (void*)&dn_ptr3);
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);

/*############# DListNext ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListNext:%p\n", (void*)DListNext(dn_ptr1));
	
/*############# DListPrev ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListPrev:%p\n", (void*)DListPrev(dn_ptr3));
	
/*############# DListIsSameIter ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListIsSameIter(dn_ptr1, dn_ptr2):%d\n", DListIsSameIter(dn_ptr1, dn_ptr2));
	printf("DListIsSameIter(dn_ptr1, dn_ptr1):%d\n", DListIsSameIter(dn_ptr1, dn_ptr1));
	
/*############# DListGetData ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("data in dn_ptr1:%lu\n", (size_t)DListGetData(dn_ptr1));
	printf("data in dn_ptr2:%lu\n", (size_t)DListGetData(dn_ptr2));
	printf("data in dn_ptr3:%lu\n", (size_t)DListGetData(dn_ptr3));
	
	
/*############# DListInsertBefore ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr4 = DListInsertBefore(dn_ptr1, (void*)0);
	printf("dn_ptr4:%p\n", (void*)dn_ptr4);
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListPopFront ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("data poped front:%lu\n", (size_t)DListPopFront(dl_ptr));

/*############# DListForEach ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("action func status:%d\n", DListForEach(DListBegin(dl_ptr), DListEnd(dl_ptr), fp, (void*)0));


/*############# PopFront all ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	while(DListSize(dl_ptr))
	{
		printf("data poped front:%lu\n", (size_t)DListPopFront(dl_ptr));
		printf("action func status:%d\n", DListForEach(DListBegin(dl_ptr), DListEnd(dl_ptr), fp, (void*)0));
	}
	
	
/*############# DListPushFront ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr1 = DListPushFront(dl_ptr, (void*)1);
	printf("&dn_ptr1:%p\n", (void*)&dn_ptr1);
		
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListPushBack ################*/	
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr4 = DListPushBack(dl_ptr, (void*)4);
	printf("&dn_ptr4:%p\n", (void*)&dn_ptr4);
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);	
	
/*############# DListInsertBefore ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr3 = DListInsertBefore(dn_ptr4, (void*)3);
	printf("dn_ptr3:%p\n", (void*)dn_ptr3);
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListInsertBefore ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr2 = DListInsertBefore(dn_ptr3, (void*)2);
	printf("dn_ptr2:%p\n", (void*)dn_ptr2);
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListForEach ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("action func status:%d\n", DListForEach(DListBegin(dl_ptr), DListEnd(dl_ptr), fp, (void*)0));
	
/*############# DListPopBack ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("data poped back:%lu\n", (size_t)DListPopBack(dl_ptr));	
	
	printf("action func status:%d\n", DListForEach(DListBegin(dl_ptr), DListEnd(dl_ptr), fp, (void*)0));
	
/*############# DListFind ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("DListFind(DListBegin(dl_ptr), DListEnd(dl_ptr), fp2, (void*)5):%p\n", (void*)DListFind(DListBegin(dl_ptr), DListEnd(dl_ptr), fp2, (void*)5));
	
	printf("DListFind(DListBegin(dl_ptr), DListEnd(dl_ptr), fp2, (void*)3):%p\n", (void*)DListFind(DListBegin(dl_ptr), DListEnd(dl_ptr), fp2, (void*)3));
	
	
/*############# DListPushBack ################*/	
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr4 = DListPushBack(dl_ptr, (void*)4);
	printf("&dn_ptr4:%p\n", (void*)&dn_ptr4);
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);	
	
/*############# DListPushBack ################*/	
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr5 = DListPushBack(dl_ptr, (void*)5);
	printf("&dn_ptr5:%p\n", (void*)&dn_ptr5);
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListPushBack ################*/	
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	dn_ptr6 = DListPushBack(dl_ptr, (void*)6);
	printf("&dn_ptr6:%p\n", (void*)&dn_ptr6);
	printf("DListIsEmpty:%i\n", DListIsEmpty(dl_ptr));
	size = DListSize(dl_ptr);
	printf("count:%lu\n", size);
	
/*############# DListSplice ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	printf("&begin:%p\n", (void*)DListSplice(dn_ptr6, dn_ptr1, dn_ptr5));
	
	printf("action func status:%d\n", DListForEach(DListBegin(dl_ptr), DListEnd(dl_ptr), fp, (void*)0));
			
/*############# DListDestroy ################*/
	printf("\nFILE:%s, func:%s, LINE:%d \n", __FILE__, __func__, __LINE__); /* DEBUG!!! */
	DListDestroy(dl_ptr);
/*	free(dn_ptr);*/
	return(0);
}


int print(void *data, void *param)
{
	printf("data + param:%lu\n", (size_t)data + (size_t)param);
	return(1);
}

int IsMatch(const void *data, const void *seek)
{
	int status = 0;
	if(data == seek)
	{
		printf("data == seek. data:%lu, seek:%lu\n", (size_t)data, (size_t)seek);
		status = 1;
	}
	return(status);
}
