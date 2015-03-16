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
    
    bool sendMessage();
    bool receiveMessage();
    
    bool hasPermision(...);
    bool isFriend(KlientNaSerwerze*);
    

    friend std::ostream& operator<<(std::ostream& stream, KlientNaSerwerze* klient)
    {
        stream << "Memory Stack Adress: " << klient <<std::endl << "IP/ID Memory Stack: "<< &klient->ID << std::endl << "IP/ID: ";
        klient->ID >> stream;
        stream <<"Memory Stack Kolekcje: "<< &klient->listaPrzyjaciol << ", "<< &klient->listaZaprzyjaznionychUrzadzen << std::endl;
        
        return stream;
    }
    
    bool operator<(KlientNaSerwerze* Klient);
    bool operator==(KlientNaSerwerze* Klient);


private:
    IPID ID;
    
    Rola<int> rola;
    Kolekcja<KlientNaSerwerze> listaPrzyjaciol;
    Kolekcja<KlientNaSerwerze> listaZaprzyjaznionychUrzadzen;
    
    



};

#endif
