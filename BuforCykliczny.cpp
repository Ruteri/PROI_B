//
//  Kolekcja2Header.h
//  Komunikator_PROI_B
//
//  Created by Arkadiusz Œwierczek on 14.03.2015.
//  Copyright (c) 2015 Pazyn. All rights reserved.
//

//BUFOR CYKLICZNY


#ifndef __Komunikator_PROI_B__BuforCyklicznycpp__
#define __Komunikator_PROI_B__BuforCyklicznycpp__
#include "BuforCykliczny.h"

template <class T>
BuforCykliczny <T>:: BuforCykliczny(int n)
{
	head = 0;
	tail = 0;
	size = n;
	bufor = new T[n];

	
}
template <class T>
BuforCykliczny <T>::~BuforCykliczny()
{
	delete[]bufor;
}
template <class T>
T BuforCykliczny <T>::Read()
{
	if (head != tail)
	{
		T x = bufor[tail];
		tail = (tail + 1) % size;
		return x;
	}
}
template <class T>
bool BuforCykliczny <T>::Add(T data)			
{
	if (tail == ((head + 1) % size)) 
		return 0;

	bufor[head] = data;
	head = (head + 1) % size;
	return 1;
}
#endif