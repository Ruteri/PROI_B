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

class KlientNaSerwerze
{
public:
    KlientNaSerwerze(IPID* Id, Node<KlientNaSerwerze>* FA = nullptr, Node<KlientNaSerwerze>* FB = nullptr, int Rola = 0):
    rola(), listaPrzyjaciol(FA), listaZaprzyjaznionychUrzadzen(FB), ID(*new IPID()) {ID = Id?*Id:NULL;}
    
    void sendMessage();    
    void receiveMessage();
    
    bool hasPermision(...);
    bool isFriend(Obiekt*);
    
    void operator >> (std::ostream &stream) {
        stream << "KlientNaSerw." << std::endl;
    }
    
    bool operator<(KlientNaSerwerze* Klient)
    {
        return this->ID<&Klient->ID;
    }

private:
    IPID ID;
    
    Rola<int> rola;
    Kolekcja<KlientNaSerwerze> listaPrzyjaciol;
    Kolekcja<KlientNaSerwerze> listaZaprzyjaznionychUrzadzen;
    
    



};


#endif /* defined(__Komunikator_PROI_B__KilentNaSerwerzeHeader__) */
