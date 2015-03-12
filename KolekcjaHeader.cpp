//
//  KolekcjaHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "KolekcjaHeader.h"

bool Kolekcja::add(Obiekt* doDodania, int mod)
{
    Node* newNode = new Node(doDodania);
    Node* help = this->firstNode;

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

Obiekt* Kolekcja::find(int Id, IPID* ipid)
{
    Obiekt* obiekt = new Obiekt(ipid);
    
    Node help(obiekt);
    Node* act = this->firstNode;

    
    while ((act = *act>&help) && act != &help) {}
    
    delete obiekt;
    return act?act->wskaznikNaKlase:nullptr;
}