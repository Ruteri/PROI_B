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
    
    Klasa* find(int ID = NULL, IPID* ip = nullptr)
    {
        return nullptr;
    }
    
    bool add(Klasa* doDodania, int mod = 0)
    {
        Node<Klasa>* newNode = new Node<Klasa>(doDodania);
        Node<Klasa>* help = this->firstNode;
        
        if (!help) {
            this->firstNode = newNode;
            return 0;
        }
        
        while (true) {
            
            if (*newNode<help) {
                if (help->LNode) {help = help->LNode; continue;}
                else {help->LNode = newNode; break;}
            } else {
                if (help->RNode){ help = help->RNode;continue;}
                else {help->RNode = newNode; break;}}
        }
        
        return 0;
    }
    
    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, int ID = NULL, ...);
    
    void operator << (std::ostream &stream)
    {
        
    }
    
};




#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
