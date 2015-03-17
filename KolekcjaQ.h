#ifndef KOLEKCJAQ_H
#define KOLEKCJAQ_H

#include <iostream>
#include "ElementQ.h"

template <class Class>
class KolekcjaQ{
	private:
		int Size;
		ElementQ<Class>* first;
		ElementQ<Class>* last;

	public:
		KolekcjaQ(){
			first = NULL;
			last = NULL;
		}

		~KolekcjaQ(){
			ElementQ<Class>* ind = first;
			while(ind !=NULL){
				ind = ind->next;
				delete ind->prev;
			}
		}
		//Powinno byc w .cpp, ale tam wywala bledy - chyba przy template'ach sie tak nie da - przynajmniej w Visual Studio, zob.http://www.ecs.fullerton.edu/~sowell/cs331/TemplateClasses.html
		void add(Class* tmp) {
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
			Size++;
		}

		Class* pop() {
			if(first == NULL){
				return NULL;
			}else if(first  == last){
				ElementQ<Class> tmp (first->Element);
				delete first;
				first = NULL;
				last = NULL;
				return tmp.Element;
			}else{
				ElementQ<Class> tmp (first->Element);
				first = first->next;
				delete (first->prev);
				first->prev = NULL;
				return tmp.Element;
			}
			Size--;
		}

		bool isEmpty(){
			return first==NULL ? 1 : 0;
		}
		
		bool find(Class* toFind){
			ElementQ<Class>* ind = first;
			while(ind!=NULL){
				if(ind->Element == toFind) return 1;
				else ind = ind->next;
			}
			return 0;
		}

		static Class* getFirst(){
			return first;
		}

		static Class* getLast(){
			return last;
		}

		int size(){
			return Size;
		}
};
//Mozna tez tak
//#include"KolekcjaQ.cpp"
#endif