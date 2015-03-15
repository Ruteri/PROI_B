//
//  NodeHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__NodeHeader__
#define __Komunikator_PROI_B__NodeHeader__

#include <ostream>


template <class Klasa>
class Node {
    
    
public:
    Klasa* wskaznikNaKlase;
    
    Node* LNode;
    Node* RNode;

    
    Node(Klasa* doDodania = nullptr): wskaznikNaKlase(doDodania), LNode(nullptr), RNode(nullptr) {}
    
    void operator<<(std::ostream &stream)
    {
        *this->wskaznikNaKlase << stream;
        stream << std::endl;
        
        if (LNode) {
            *LNode<<stream;
        }
        
        if (RNode) {
            *RNode<<stream;
        }
    }
    
    bool operator<(Node<Klasa>* node)
    {
        return node?*this->wskaznikNaKlase<node->wskaznikNaKlase:NULL;
    }
    
    Node* operator>(Node* node)
    {
        if (*this->wskaznikNaKlase == node->wskaznikNaKlase) {
            return node;
        }
        
        return *node<this? this->LNode: this->RNode;
    }

    
};

#endif /* defined(__Komunikator_PROI_B__NodeHeader__) */
