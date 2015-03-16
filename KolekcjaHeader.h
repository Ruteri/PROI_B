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
    
public:
    Node<Klasa>* firstNode;

    Kolekcja(Node<Klasa>* FirstNode = nullptr): firstNode(FirstNode) {}
    
    Klasa* find(Klasa* doZnalezienia = nullptr);

    Node<Klasa>* findNode(Klasa* doZnalezienia = nullptr);
    
    bool add(Klasa* doDodania, int mod = 0);

    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, IPID* ip = nullptr);
    
    bool sortInNode(Node<Klasa>* node);
    
    int *countChildren(Node<Klasa>* node, int *n);
    
    friend std::ostream& operator<<(std::ostream& stream, const Kolekcja<Klasa>* kolekcja)
    {
        stream << "Kolekcja @Memory Stack: " << &kolekcja << std::endl << std::endl << "With Nodes: " << std::endl;
        stream << kolekcja->firstNode << std::endl;
        
        return stream;
    }

    
};


#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
#include "KolekcjaHeader.cpp"