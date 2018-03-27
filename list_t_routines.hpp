#ifndef LIST_T_ROUTINES_HPP
#define LIST_T_ROUTINES_HPP
#include "pict_t_routines.hpp"
struct list_t {
    pict_t content;
    list_t* next;
};
//typedef list_t* head_t;
int Add(list_t** head, pict_t pic)
{
    if (*head == nullptr) {
        *head = new list_t;
        (*head)->content = pic;
        (*head)->next = nullptr;
    }
    else {
        list_t* buf = new list_t;
        buf->content = pic;
        buf->next = *head;
        *head = buf;
    }
    return 0;
};
int Print(list_t* head)
{
    list_t* current = head;
    if (current == nullptr)
        puts("!!!EMPTY!!!");
    else {
        while (current != nullptr) {
            PrintPict(current->content);
            current = current->next;
        }
    }
    return 0;
}
int FindMostPopular(list_t* head)
{
	int co = -1;
	list_t* current = head;
	if (current != nullptr)
	{
		co = 0;
		int k = 0;
		 int max = (current->content).count;
		 while(current!=nullptr)
		 {
			 if((current->content).count>max) {
			  max = (current->content).count;

			  co = k;
			 }
			 k++;
			 current = current->next;
		 }
	}
	return co;
}
int Erase(list_t** head, int what)
{
	if (*head==nullptr)
		return 1;
	else {
	int k = 0;
	while()
	
	}
	return 0;
}
#endif // LIST_T_ROUTINES_HPP
