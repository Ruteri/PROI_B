//
//  SerwerHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__SerwerHeader__
#define __Komunikator_PROI_B__SerwerHeader__

#include "KilentNaSerwerzeHeader.h"
#include "UrzadzenieHeader.h"
#include "KolekcjaHeader.h"
#include <iostream>



class Serwer {
    
    Kolekcja<KlientNaSerwerze> listaKlientow;
    Kolekcja<KlientNaSerwerze> listaUrzadzen;
    
    
public:
    
    Serwer(Node<KlientNaSerwerze>* FA = nullptr, Node<KlientNaSerwerze>* FB = nullptr): listaKlientow(FA), listaUrzadzen(FB) {};
    ~Serwer() {};
    
    void operator<<(std::ostream &stream);
    
    
    template <class Klasa>
    void add(Klasa* Klient); // do szablonu
    
    void sendMessage();
    void receiveMessage();
    
    bool maUprawnienia(Obiekt* A){return this->listaKlientow.find(0, A->ID)?1:0;}
    
    template <class Klasa>
    void connect(const Klasa* klasa);
    
};


#endif /* defined(__Komunikator_PROI_B__SerwerHeader__) */
