#ifndef ELEMENTQ_H
#define ELEMENTQ_H

#include<iostream>

template <class Class>
class ElementQ{
	public:
		Class* Element;
		ElementQ* next;
		ElementQ* prev;

		ElementQ(Class* newE){
			next= NULL;
			prev= NULL;
			Element=newE;
		}


};

#endif