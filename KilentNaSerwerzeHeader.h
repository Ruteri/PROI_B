//
//  KilentNaSerwerzeHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//



#ifndef __Komunikator_PROI_B__KilentNaSerwerzeHeader__
#define __Komunikator_PROI_B__KilentNaSerwerzeHeader__

#include "IPIDHeader.h"
#include "KolekcjaHeader.h"
#include "PaczkaDanych.h"
#include "rolaHeader.h"
#include <iostream>

class KlientNaSerwerze
{
public:
    
    void sendMessage();    
    void receiveMessage();
    
    void operator >> (std::ostream &stream)
    {
        stream << "KlientNaSerw." << std::endl;
    }

private:
    
    IPID Identyfikator; // na obiekt
    //Kolekcja<KlientNaSerwerze> listaPrzyjaciol; // na obiekt
    // Kolekcja<PaczkaDanych> ostatnieWiadomosci;
    
    Rola<int> rola;
    



};


#endif /* defined(__Komunikator_PROI_B__KilentNaSerwerzeHeader__) */
