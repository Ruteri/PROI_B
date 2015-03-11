//
//  KolekcjaHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__KolekcjaHeader__
#define __Komunikator_PROI_B__KolekcjaHeader__

#include <cstdlib>
#include <ostream>
#include <ctime>
#include "IPIDHeader.h"
#include "NodeHeader.h"


template <class Klasa, class IDTYPE>
class Kolekcja {
    Node<Klasa, IDTYPE>* firstNode;
    
public:
    Kolekcja(IDTYPE midId): firstNode(new Node<Klasa, IDTYPE>(nullptr, midId)) {}
    
    Klasa* find(int ID = NULL, IPID* ip = nullptr);
    
    bool add(Klasa*, IDTYPE*, int mod = 0);
    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, int ID = NULL, ...);
    
    
};




#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
