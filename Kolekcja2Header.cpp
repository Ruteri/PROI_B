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
template <typename T>
Kolekcja2 <T>::Kolekcja2(int n)
{
		this->buffor = new T[n];
		size = n;
		begin = 0;
		end = 0;
		maska = n-1;
	//else
	//obs�uga b��d�w zwi�zana z nieodpowiedni� wielko�ci� bufora. Przyj��em, �e musi by� potg� 2, dla oszcz�dno�ci operacji. Zamiast operatora % mog� u�y� &(iloczyn bitowy)
}
template <class T>
Kolekcja2 <T>::~Kolekcja2()
{
	delete[]buffor;
}
template <typename T>
void Kolekcja2 <T>::Add(T doDodania)//				[][x][x][x][x][x][][]
{	//												begin			end
	if (IsFull())
		buffor[end] = doDodania; //kiedy bufor jest pe�en 
	else
	{
		buffor[end] = doDodania;//bufor nie jest pe�ny
		end = end++;
	}
}
template <typename T>
bool Kolekcja2 <T>::Delate()
{
	if (IsEmpty()) return NULL; //kiedy bufor jest pusty
	else return buffor[(begin++)&maska];//bufor nie jest pusty
}
template <typename T>
bool Kolekcja2 <T>::IsEmpty()
{
	return (end == begin) ? 1 : 0;
}
template <typename T>
bool Kolekcja2 <T>::IsFull()
{
	return (((end + 1)&maska) == begin&maska) ? 1 : 0;
}
template <typename T>
T* Kolekcja2 <T>::Read(int i) // do poprawki, nie wypisuje ostatniego elementu doda� maske do begin
{
if (!IsEmpty()&&(i>=(begin&maska) && i<=(end&maska)))
		return &buffor[i];
	return nullptr;
}
#endif