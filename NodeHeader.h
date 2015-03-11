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

template <class Klasa, class IDTYPE>
class Node {
    Node* LNode;
    Node* RNode;
    
    Klasa* wskaznikNaKlase;
    
    IDTYPE* ID;
    
public:
    
    Node<>(IDTYPE* ipid, Klasa* doDodania): ID(ipid), wskaznikNaKlase(doDodania), LNode(nullptr), RNode(nullptr) {}
    
    
    void operator<<(std::ostream);
    void operator<(Node*);
    
};

#endif /* defined(__Komunikator_PROI_B__NodeHeader__) */
