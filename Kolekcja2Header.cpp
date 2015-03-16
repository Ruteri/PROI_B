//
//  Kolekcja2Header.h
//  Komunikator_PROI_B
//
//  Created by Arkadiusz �wierczek on 14.03.2015.
//  Copyright (c) 2015 Pazyn. All rights reserved.
//

//BUFOR CYKLICZNY


#ifndef __Komunikator_PROI_B__Kolekcja2Headercpp__
#define __Komunikator_PROI_B__Kolekcja2Headercpp__
#include "Kolekcja2Header.h"
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
	//obs�uga b��d�w zwi�zana z nieodpowiedni� wielko�ci� bufora. Przyj��em, �e musi by� potg� 2, dla oszcz�dno�ci operacji. Zamiast operatora % mog� u�y� &(iloczyn bitowy)
}
template <class T, int n>
Kolekcja2 <T, n>::~Kolekcja2()
{
	delete[]buffor;
}
template <typename T, int n>
void Kolekcja2 <T, n>::Add(T doDodania)//				[][x][x][x][x][x][][]
{	//												begin			end
	if (IsFull()) return; //kiedy bufor jest pe�en 
	else buffor[end++] = doDodania;//bufor nie jest pe�ny
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
		return buffor[i];
}
#endif