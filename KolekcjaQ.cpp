/*#ifdef KOLEKCJAQ_H
#include "KolekcjaQ.h"
#include "ElementQ.h"

bool KolekcjaQ<class Class>::isEmpty(){
	return first==NULL ? 1 : 0;
}

//Definicja w pliku .h, wywala unresolved external symbol w mainie

template<class Class> void KolekcjaQ<Class>::add(Class* tmp){
	ElementQ<Class>* Etmp = new ElementQ<Class>(tmp);
	if(first == NULL){
		first = Etmp;
		last = Etmp;
	}
	else{
		last->next = Etmp;
		(last->next)->prev = last;
		last = Etmp;
	}
}


template<class Class> Class* KolekcjaQ<Class>::pop(){
	if(first == NULL){
		return NULL;
	}
	else{
		return first->Element;
		first = first->next;
		delete first->prev;
		first->prev = NULL;

	}
}
/#endif
*/