//
//  Kolekcja2Header.h
//  Komunikator_PROI_B
//
//  Created by Arkadiusz Œwierczek on 14.03.2015.
//  Copyright (c) 2015 Pazyn. All rights reserved.
//

//BUFOR CYKLICZNY

#include "Kolekcja2Header.h"

template <typename T>
Kolekcja2 <T>::Kolekcja2(int size) : size(size), begin(0), end(0), maska(size - 1)
	{
	if (size!=0 && ((size&maska)==0))
		buffor = new T[size];
	else
		//obs³uga b³êdów zwi¹zana z nieodpowiedni¹ wielkoœci¹ bufora. Przyj¹³em, ¿e musi byæ potg¹ 2, dla oszczêdnoœci operacji. Zamiast operatora % mogê u¿yæ &(iloczyn bitowy)
	}
template <typename T>
	Kolekcja2 <T>::~Kolekcja2()
	{
		delete[]buffor;
	}
template <typename T>
	void Kolekcja2 <T>::Add(T &doDodania)//				[][x][x][x][x][x][][]
	{	//												begin			end
		if (IsFull()) return; //kiedy bufor jest pe³en 
		else T[end++] = doDodania;//bufor nie jest pe³ny
	}
template <typename T>
	T Kolekcja2 <T>::Read()
	{
		if (IsEmpty()) return NULL; //kiedy bufor jest pusty
		else return bufor[(begin++)&maska];//bufor nie jest pusty
	}
template <typename T>
	bool Kolekcja2 <T>::IsEmpty()
	{
		return (end == begin) ? 1 : 0;
	}
template <typename T>
	bool Kolekcja2 <T>::IsFull()
	{
		return ((end + 1)&maska == begin) ? 1 : 0;
	}