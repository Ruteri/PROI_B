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
    Kolekcja(Node<Klasa>* FirstNode = nullptr): firstNode(FirstNode) {}
    
    Klasa* find(int ID = NULL, IPID* ip = nullptr);

    bool add(Klasa* doDodania, int mod = 0);

    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, int ID = NULL, ...);
    
    friend std::ostream& operator<<(std::ostream& stream, const Kolekcja<Klasa>* kolekcja)
    {
        stream << "Kolekcja @Memory Stack: " << &kolekcja << std::endl << std::endl << "With Nodes: " << std::endl;
        stream << kolekcja->firstNode << std::endl;
        
        return stream;
    }

    
};


#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
#include "KolekcjaHeader.cpp"