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
#include <ctime>
#include "IPIDHeader.h"

template <class Klasa>
class Node {
    Node* LNode;
    Node* RNode;
    
    Klasa* wskaznikNaKlase;
    int ID;
    
public:
    
    Node(Klasa* wskaznik, Node* node0):
    LNode(nullptr), RNode(nullptr), wskaznikNaKlase(wskaznik)
    {
        ID = rand()%1000;
        while (true) {
            if (!node0) {
                ID = 500;
                break;
            }
            
            
            if (node0->ID < this->ID) {
                if (node0->RNode)
                    node0 = node0->RNode;
                else {
                    node0->RNode = this;
                    break;
                }
            } else if (node0->LNode)
                    node0 = node0->LNode;
            else {
                node0->LNode = this;
                break;
            }
        }
    } // dodaje w dobrym miejscu (zaufaj mi)
    
    Node* operator!=(Node* szukany){
        if (this == szukany)
            return nullptr;
        else
            if (this->ID < szukany->ID)
                return RNode;
            else return LNode;
    } // do szukania
    
    void operator<<(std::ostream &stream)
    {
        stream << this->LNode << " " << this->RNode << " " << this->ID << " " << this->wskaznikNaKlase << std::endl;
        *(this->wskaznikNaKlase) << stream;
    }
    
    bool operator-(Klasa* doOdjecia)
    {
        
    }
    
};


template <class Klasa>
class Kolekcja {

    
    
public:
    Klasa* find(Klasa* A = nullptr, int ID = NULL, IPID* ip = nullptr);
    
    bool add(Klasa*, int a = 0);
    bool push(Klasa*);
    
    bool del(Klasa* A = nullptr, int ID = NULL, ...);
    
    
};




#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
