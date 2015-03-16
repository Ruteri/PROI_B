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
    IPID ID;
    
    Rola<int> rola;
    Kolekcja<KlientNaSerwerze> listaPrzyjaciol;
    Kolekcja<KlientNaSerwerze> listaZaprzyjaznionychUrzadzen;

    
public:
    KlientNaSerwerze(IPID* Id, Node<KlientNaSerwerze>* FA = nullptr, Node<KlientNaSerwerze>* FB = nullptr, int Rola = 0):
    rola(), listaPrzyjaciol(FA), listaZaprzyjaznionychUrzadzen(FB), ID(*new IPID()) {ID = Id?*Id:NULL;}
    
    bool sendMessage();
    bool receiveMessage();
    
    bool hasPermision(...);
    bool isFriend(KlientNaSerwerze*);
    

    friend std::ostream& operator<<(std::ostream& stream, KlientNaSerwerze* klient)
    {
        stream << "KLIENT WITH: " << &klient->ID;
        stream <<"Memory Stack Kolekcje: "<< &klient->listaPrzyjaciol << " && "<< &klient->listaZaprzyjaznionychUrzadzen << std::endl;
        
        return stream;
    }
    
    bool operator<(KlientNaSerwerze* Klient);
    bool operator==(KlientNaSerwerze* Klient);




};

#endif
