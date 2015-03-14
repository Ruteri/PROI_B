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
#include "ObiektHeader.h"

template <class Klasa>
class Kolekcja {
    Node<Klasa>* firstNode;
    
public:
    Kolekcja(Node<Klasa>* FirstNode): firstNode(FirstNode) {}
    
    Klasa* find(int ID = NULL, IPID* ip = nullptr);
    
    bool add(Klasa*, int mod = 0);
    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, int ID = NULL, ...);
    
    
};




#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
