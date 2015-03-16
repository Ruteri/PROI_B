//
//  NodeHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __KOM_B_NODECPP
#define __KOM_B_NODECPP

#include "NodeHeader.h"


template<class Klasa>
Node<Klasa>* Node<Klasa>::nextNode()
{
    return this->RNode;
}

template<class Klasa>
Node<Klasa>* Node<Klasa>::prevNode()
{
    return this->LNode;
}

template<class Klasa>
bool Node<Klasa>::setLNode(Node* toSet)
{
    this->LNode = toSet;
    return 0;
}

template<class Klasa>
bool Node<Klasa>::setRNode(Node* toSet)
{
    this->RNode = toSet;
    return 0;
}

template <class Klasa>
Node<Klasa>* Node<Klasa>::operator>(Node<Klasa>* node)
{
    if (*this->wskaznikNaKlase == node->wskaznikNaKlase) {
        return node;
    }
    
    return *node<this? this->LNode: this->RNode;
    }

template <class Klasa>
bool Node<Klasa>::operator<(Node<Klasa>* node)
{
    return node?*this->wskaznikNaKlase<node->wskaznikNaKlase:NULL;
}


#endif



