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
#include "ObiektHeader.h"

class KlientNaSerwerze : Obiekt
{
public:
    KlientNaSerwerze(Node* FA, Node* FB, IPID* Id, int Rola = 0):
        Obiekt(Id), rola(), listaPrzyjaciol(FA), listaZaprzyjaznionychUrzadzen(FB) {}
    
    void sendMessage();    
    void receiveMessage();
    
    bool hasPermision(...);
    bool isFriend(Obiekt*);
    
    void operator >> (std::ostream &stream) {
        stream << "KlientNaSerw." << std::endl;
    }

private:
    Rola<int> rola;
    Kolekcja listaPrzyjaciol;
    Kolekcja listaZaprzyjaznionychUrzadzen;
    
    



};


#endif /* defined(__Komunikator_PROI_B__KilentNaSerwerzeHeader__) */
