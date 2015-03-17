//
//  Kolekcja2Header.h
//  Komunikator_PROI_B
//
//  Created by Arkadiusz Œwierczek on 14.03.2015.
//  Copyright (c) 2015 Pazyn. All rights reserved.
//

//BUFOR CYKLICZNY
#ifndef __Komunikator_PROI_B__BuforCykliczny__
#define __Komunikator_PROI_B__BuforCykliczny__

#include <cstdlib>
#include <ostream>
#include <ctime>
#include <cmath>
#include "IPIDHeader.h"
#include "NodeHeader.h"
#include "ObiektHeader.h"

template <class T>
class BuforCykliczny {
	
	volatile int head;
	volatile int tail;
	T *bufor;
public:
	int size;
	
public:
	BuforCykliczny(int);
	~BuforCykliczny();
	

	bool Add(T data);
	T* Read();
	friend std::ostream & operator<<(std::ostream& stream,  BuforCykliczny<T> &ob)
	{
		stream << "Elementy bufora cyklicznego: " << std::endl;
		for (int i = 0; i < ob.size; i++)
			stream << ob.bufor[i] << " "; 
		stream << std::endl;
		stream << "tail:\t" <<ob.tail<<"\thead:\t"<<ob.head<<std::endl;
		return stream;
	}
private:
	bool IsEmpty();
	bool IsFull();
};
#endif /* defined(__Komunikator_PROI_B__BuforCykliczny__) */
#include  "BuforCykliczny.cpp"
