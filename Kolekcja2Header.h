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

template <class T, int n>
class Kolekcja2 {
	T * buffor;
	int size;
	int begin;
	int end;
	int maska;

public:
	Kolekcja2(void);
	~Kolekcja2(void);

	void Add(T);
	bool Delate(void);
	bool IsEmpty(void);
	bool IsFull(void);
	T Read(int i);
};
template <typename T, int n>
Kolekcja2 <T, n>::Kolekcja2()
{
	if (n != 0 && ((n&maska) == 0))
	{
		buffor = new T[n];
		size = n;
		begin = 0;
		end = 0;
		maska = n - 1;
	}
	//else
	//obs³uga b³êdów zwi¹zana z nieodpowiedni¹ wielkoœci¹ bufora. Przyj¹³em, ¿e musi byæ potg¹ 2, dla oszczêdnoœci operacji. Zamiast operatora % mogê u¿yæ &(iloczyn bitowy)
}
template <class T, int n>
Kolekcja2 <T, n>::~Kolekcja2()
{
	delete[]buffor;
}
template <typename T, int n>
void Kolekcja2 <T, n>::Add(T doDodania)//				[][x][x][x][x][x][][]
{	//												begin			end
	if (IsFull()) return; //kiedy bufor jest pe³en 
	else buffor[end++] = doDodania;//bufor nie jest pe³ny
}
template <typename T, int n>
bool Kolekcja2 <T, n>::Delate()
{
	if (IsEmpty()) return NULL; //kiedy bufor jest pusty
	else return buffor[(begin++)&maska];//bufor nie jest pusty
}
template <typename T, int n>
bool Kolekcja2 <T, n>::IsEmpty()
{
	return (end == begin) ? 1 : 0;
}
template <typename T, int n>
bool Kolekcja2 <T, n>::IsFull()
{
	return (((end + 1)&maska) == begin) ? 1 : 0;
}
template <typename T, int n>
T Kolekcja2 <T, n>::Read(int i)
{
	if (i >= begin && i <= (end&maska))
		return boffor[i];
}




#endif /* defined(__Komunikator_PROI_B__Kolekcja2Header__) */
