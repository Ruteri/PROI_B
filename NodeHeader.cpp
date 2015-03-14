//
//  NodeHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 11.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "NodeHeader.h"

//template <>
//bool Node<class Klasa, class IDTYPE>::operator<(Node<class Klasa, class IDTYPE>* A)
//{
//  stream << this->wskaznikNaKlase << " " << this->LNode << " " << this->RNode << std::endl;
//}

template <class Klasa>
bool Node<Klasa>::operator<(Node<Klasa>* node)
{
    
    return *this->wskaznikNaKlase<node->wskaznikNaKlase;
}

template <class Klasa>
Node<Klasa>* Node<Klasa>::operator>(Node<Klasa>* node)
{
    if (*this->wskaznikNaKlase == node->wskaznikNaKlase) {
        return node;
    }
    
    return *node<this? this->LNode: this->RNode;
}