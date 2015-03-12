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
#include "ObiektHeader.h"

class Node {
    
    
public:
    Obiekt* wskaznikNaKlase;
    
    Node* LNode;
    Node* RNode;

    
    Node(Obiekt* doDodania): wskaznikNaKlase(doDodania), LNode(nullptr), RNode(nullptr) {}
    
    
    void operator<<(std::ostream);
    bool operator<(Node*);
    Node* operator>(Node*);

    
};

#endif /* defined(__Komunikator_PROI_B__NodeHeader__) */
