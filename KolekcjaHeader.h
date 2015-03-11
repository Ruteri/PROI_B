//
//  KolekcjaHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__KolekcjaHeader__
#define __Komunikator_PROI_B__KolekcjaHeader__

#include <random>

template <class Klasa>
class Node {
    Node* LNode;
    Node* RNode;
    
    Klasa* wskaznikNaKlase;
    int ID;
    
public:
    
    Node(Klasa* wskaznik):
    LNode(), RNode(), wskaznikNaKlase(wskaznik)
    {
        ID = rand()*1000;
    }
    
    Node* operator!=(Node* szukany){
        if (this == szukany)
            return nullptr;
        else
            if (this->ID < szukany->ID)
                return RNode;
            else return LNode;
    } // do szukania while (node != node*)

    void operator<<(std::ostream &stream);
    
    bool operator+();
    
    bool operator-();
    
};

template <class Klasa>
class Kolekcja {

    
    
public:
    Klasa* find(...);
    
    bool add(Klasa*, int a = 0);
    bool push(Klasa*);
    
    bool swap(...);
    
    bool del(Klasa* A = nullptr, ...);
    
    
};




#endif /* defined(__Komunikator_PROI_B__KolekcjaHeader__) */
