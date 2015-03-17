//
//  KlientUKleintaHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//
// 13.03.2015 Arkadiusz Świerczek- I pisanie klasy
//			pozmieniane nazwy
//			uporządkowanie
//			dodanie deklaracji nowych funkcji


#ifndef __Komunikator_PROI_B__KlientUKleintaHeader__
#define __Komunikator_PROI_B__KlientUKleintaHeader__

#include <stdio.h>
#include <string>

#include "ObiektHeader.h"
#include "IPIDHeader.h"
#include "KolekcjaHeader.h"
#include "PaczkaDanych.h"

class KlientUKleinta: Obiekt
{
	public:
		KlientUKleinta(Node<KlientUKleinta>* FA, Node<KlientUKleinta>* FB, IPID* Id):
			Obiekt(Id), friends_list(FA), devices_list(FB) {}
    
    bool operator<(KlientUKleinta* A)
    {
        return 0;
    }

	private:
		Kolekcja<KlientUKleinta> friends_list;
		Kolekcja<KlientUKleinta> devices_list;

		void SendMessage(std::string );
		//void ReceiveMessage(); jak chcemy to rozwiązać?  czy zakładamy, że klient posiada wiele wątków? 
		void ShowHistory(Obiekt*); //wyświetlanie historii z użytkownikiem lub urządzeniem
		void ShowDevices(Obiekt*); //pokazuje powiązane urządzenia, czyli takie, do których dostęp jest bez udziału serwera
		void ShowFriends(Obiekt*); //pokazuje użytkowników zaprzyjaźnionych 
		
	void operator >> (std::ostream &stream) {
		stream << "Klient u klienta:" << std::endl;
        
        
	}
};
#endif /* defined(__Komunikator_PROI_B__KlientUKleintaHeader__) */
