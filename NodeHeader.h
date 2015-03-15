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
    
    Node* LNode;
    Node* RNode;

    Klasa* wskaznikNaKlase;

public:
    
    Node(Klasa* doDodania = nullptr): wskaznikNaKlase(doDodania), LNode(nullptr), RNode(nullptr) {}
    
    
    void operator<<(std::ostream &stream);
    
    bool operator<(Node<Klasa>* node);
    
    Node* operator>(Node* node);
    
    Node* nextNode();
    
    Node* prevNode();
    
    bool setLNode(Node* toSet);
    
    bool setRNode(Node* toSet);

    
};

#endif
#include "NodeHeader.cpp"
