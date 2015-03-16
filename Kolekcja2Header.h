//
//  Kolekcja2Header.h
//  Komunikator_PROI_B
//
//  Created by Arkadiusz Œwierczek on 14.03.2015.
//  Copyright (c) 2015 Pazyn. All rights reserved.
//

//BUFOR CYKLICZNY
#ifndef __Komunikator_PROI_B__Kolekcja2Header__
#define __Komunikator_PROI_B__Kolekcja2Header__

#include <cstdlib>
#include <ostream>
#include <ctime>
#include "IPIDHeader.h"
#include "NodeHeader.h"
#include "ObiektHeader.h"

template <class T>
class Kolekcja2 {
	T * buffor;
	int size;
	int begin;
	int end;
	int maska;

public:
	Kolekcja2(int n);
	~Kolekcja2(void);

	void Add(T);
	bool Delete(void);
	bool IsEmpty(void);
	bool IsFull(void);
	T* Read(int i);
};
#endif /* defined(__Komunikator_PROI_B__Kolekcja2Header__) */
#include  "Kolekcja2Header.cpp"
