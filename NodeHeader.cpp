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

bool Node::operator<(Node* node)
{
    
    return *this->wskaznikNaKlase<node->wskaznikNaKlase;
}

Node* Node::operator>(Node* node)
{
    if (*this->wskaznikNaKlase == node->wskaznikNaKlase) {
        return node;
    }
    
    return *node<this? this->LNode: this->RNode;
}