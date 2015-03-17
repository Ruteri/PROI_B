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
#include <string>

#include "ObiektHeader.h"
#include "IPIDHeader.h"
#include "BuforCykliczny.h"
#include "PaczkaDanych.h"

class KlientUKleinta: Obiekt
{
	BuforCykliczny <Obiekt> friends_list();
	BuforCykliczny <Obiekt> devices_list();
public:
	KlientUKleinta(IPID* Id) : Obiekt(Id) {}
	void ShowHistory(Obiekt*);
	void AddFreiend(Obiekt*);
	void AddDevice(Obiekt*);
	void RemoveFriend(Obiekt*);
	void RemoveDevice(Obiekt*);
       
};
#endif /* defined(__Komunikator_PROI_B__KlientUKleintaHeader__) */
