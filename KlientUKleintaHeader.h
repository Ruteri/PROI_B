//
//  KlientUKleintaHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//
// 13.03.2015 Arkadiusz Œwierczek- I pisanie klasy
//			pozmieniane nazwy
//			uporz¹dkowanie
//			dodanie deklaracji nowych funkcji


#ifndef __Komunikator_PROI_B__KlientUKleintaHeader__
#define __Komunikator_PROI_B__KlientUKleintaHeader__

#include <stdio.h>

#include "ObiektHeader.h"
#include "IPIDHeader.h"
#include "KolekcjaHeader.h"
#include "PaczkaDanych.h"

class KlientUKleinta: Obiekt
{
	public:
		KlientUKleinta(Node* FA, Node* FB, IPID* Id):
			Obiekt(Id), friends_list(FA), devices_list(FB) {} 
	private:
		Kolekcja friends_list;
		Kolekcja devices_list;

		void SendMessage();
		//void ReceiveMessage(); jak chcemy to rozwi¹zaæ?  czy zak³adamy, ¿e klient posiada wiele w¹tków? 
		void ShowHistory(Obiekt*); //wyœwietlanie historii z u¿ytkownikiem lub urz¹dzeniem
		void ShowDevices(Obiekt*); //pokazuje powi¹zane urz¹dzenia, czyli takie, do których dostêp jest bez udzia³u serwera
		void ShowFriends(Obiekt*); //pokazuje u¿ytkowników zaprzyjaŸnionych 
		
	void operator >> (std::ostream &stream) {
		stream << "Klient u klienta:" << std::endl;
	}
};
#endif /* defined(__Komunikator_PROI_B__KlientUKleintaHeader__) */
