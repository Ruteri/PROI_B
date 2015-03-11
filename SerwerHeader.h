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
    
    //Kolekcja<KlientNaSerwerze> listaKlientow();
    //Kolekcja<Urzadzenie<int>> listaUrzadzen();
    
    template <class Klasa>
    void addObject(const Klasa Object);
    
    
    
    
public:
    
    Serwer() {};
    ~Serwer() {};
    
    void operator<<(std::ostream &stream);
    void operator>>(const void* Klient){addObject(Klient);}
    
    void sendMessage();
    void receiveMessage();
    
    template <class Klasa>
    void connect(const Klasa* klasa);
    
};


#endif /* defined(__Komunikator_PROI_B__SerwerHeader__) */
