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
    
    
    
public:
    
    Kolekcja<KlientNaSerwerze> listaKlientow;
    Kolekcja<KlientNaSerwerze> listaUrzadzen;

    
    Serwer(Node<KlientNaSerwerze>* FA = nullptr, Node<KlientNaSerwerze>* FB = nullptr): listaKlientow(FA), listaUrzadzen(FB) {};
    ~Serwer() {};
    
    friend std::ostream& operator<<(std::ostream& stream, const Serwer* serwer)
    {
        stream << "Serwer @" << &serwer << std::endl << "With Kolekcja: "<< std::endl;
        stream << &serwer->listaKlientow << std::endl;
        stream << &serwer->listaUrzadzen << std::endl;
        
        return stream;
    }
    
    
    bool addKlient(KlientNaSerwerze* Klient);
    KlientNaSerwerze* findKlient(IPID* ip);
    
    bool addDevice();
    
    void sendMessage();
    void receiveMessage();
    
    //bool maUprawnienia(Obiekt* A){return this->listaKlientow.find(A)?1:0;}
    
    template <class Klasa>
    void connect(const Klasa* klasa);
    
};


#endif /* defined(__Komunikator_PROI_B__SerwerHeader__) */
