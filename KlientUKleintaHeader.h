//
//  KlientUKleintaHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//
// 13.03.2015 Arkadiusz �wierczek- I pisanie klasy
//			pozmieniane nazwy
//			uporz�dkowanie
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
		//void ReceiveMessage(); jak chcemy to rozwi�za�?  czy zak�adamy, �e klient posiada wiele w�tk�w? 
		void ShowHistory(Obiekt*); //wy�wietlanie historii z u�ytkownikiem lub urz�dzeniem
		void ShowDevices(Obiekt*); //pokazuje powi�zane urz�dzenia, czyli takie, do kt�rych dost�p jest bez udzia�u serwera
		void ShowFriends(Obiekt*); //pokazuje u�ytkownik�w zaprzyja�nionych 
		
	void operator >> (std::ostream &stream) {
		stream << "Klient u klienta:" << std::endl;
	}
};
#endif /* defined(__Komunikator_PROI_B__KlientUKleintaHeader__) */
