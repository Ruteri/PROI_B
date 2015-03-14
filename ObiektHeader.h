//
//  ObiektHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__ObiektHeader__
#define __Komunikator_PROI_B__ObiektHeader__

#include <ostream>
#include "IPIDHeader.h"

// BEZ SERWERA

// TODO: typ, IP/ID? (zamiast klienta), przec. <<, receiveMessage (z serwera/od kogos), sendMessage (na serwer/do kogos), ostatnie wiadomosci

class Obiekt
{
    
public:
    Obiekt(IPID* a): ID(a) {}
    
    IPID* ID;
    int Typ;
    
    bool operator==(Obiekt*);
    void operator<<(std::ostream &stream) { stream << "Klasa obiekt" << std::endl; }
    bool operator<(Obiekt*);
};



#endif /* defined(__Komunikator_PROI_B__ObiektHeader__) */
