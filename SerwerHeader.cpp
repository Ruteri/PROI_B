//
//  SerwerHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "SerwerHeader.h"

bool Serwer::addKlient(KlientNaSerwerze* doDodania)
{
    return this->listaKlientow.add(doDodania, 0);
}

KlientNaSerwerze* Serwer::findKlient(IPID* ip)
{
    if (!ip)
        return nullptr;
    
    KlientNaSerwerze klient(ip);
    return this->listaKlientow.find(&klient);
}
