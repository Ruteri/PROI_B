//
//  SerwerHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__SerwerHeader__
#define __Komunikator_PROI_B__SerwerHeader__

#import "KilentNaSerwerzeHeader.h"
#import "UrzadzenieHeader.h"
#import <iostream>


class Serwer {
    Kolekcja<KlientNaSerwerze> listaKlientow;
    Kolekcja<Urzadzenie<int>> listaUrzadzen;
    
    template <class Klasa>
    void addObject(Klasa Object);
    
public:
    
    Serwer() {};
    ~Serwer() {};
    
    void operator<<(std::ostream &stream);
    void operator>>(void* Klient){addObject(Klient);}
    
    void receiveMessage();
    void sendMessage();
    
};


#endif /* defined(__Komunikator_PROI_B__SerwerHeader__) */
