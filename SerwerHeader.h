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
    void addObjects(Klasa listOfObjects);
    
public:
    Serwer() {};
    
    void operator<<(std::ostream &stream);
    void operator>>(void* Klient){addObjects(Klient);}
    
    
};


#endif /* defined(__Komunikator_PROI_B__SerwerHeader__) */
