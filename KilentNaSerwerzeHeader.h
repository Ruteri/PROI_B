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
    KlientNaSerwerze(Node<KlientNaSerwerze>* FA, Node<KlientNaSerwerze>* FB, IPID* Id, int Rola = 0):
    rola(), listaPrzyjaciol(FA), listaZaprzyjaznionychUrzadzen(FB), ID(NULL) {this->ID = *Id;}
    
    bool sendMessage();
    bool receiveMessage();
    
    bool hasPermision(...);
    
    template <class Klasa>
    bool isFriend(Klasa*);
    
    

    void operator >> (std::ostream &stream) {
        stream << "KlientNaSerw." << std::endl;
    }

private:
    IPID ID;
    
    Rola<int> rola;
    Kolekcja<KlientNaSerwerze> listaPrzyjaciol;
    Kolekcja<KlientNaSerwerze> listaZaprzyjaznionychUrzadzen;
    
    



};


#endif /* defined(__Komunikator_PROI_B__KilentNaSerwerzeHeader__) */
